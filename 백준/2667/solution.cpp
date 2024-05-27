#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int map[25][25];
int visited[25][25];
vector<int> answer;

int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};
int N;
int cnt;

void dfs(int r, int c)
{

	for (int i = 0; i < 4; i++)
	{

		int nr = r + dr[i];
		int nc = c + dc[i];

		if (nr >= N || nr < 0 || nc >= N || nc < 0)
			continue;

		if (visited[nr][nc] == 0 && map[nr][nc] == 1)
		{
			visited[nr][nc] = 1;
			cnt++;
			dfs(nr, nc);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	string input;

	for (int i = 0; i < N; i++)
	{
		cin >> input;
		for (int j = 0; j < input.length(); j++)
		{
			visited[i][j] = 0;

			if (input[j] == '1')
			{
				map[i][j] = 1;
			}
			else
				map[i][j] = 0;
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (map[i][j] == 1 && visited[i][j] == 0)
			{
				visited[i][j] = 1;
				cnt = 1;
				dfs(i, j);
				answer.push_back(cnt);
			}
		}
	}

	sort(answer.begin(), answer.end());
	cout << answer.size() << "\n";

	for (int i = 0; i < answer.size(); i++)
	{
		cout << answer[i] << "\n";
	}

	return 0;
}