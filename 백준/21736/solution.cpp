#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int n, m, answer = 0;
char map[601][601];
bool visited[601][601];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};

queue<pair<int, int> > q;

void bfs(int I_x, int I_y)
{
	q.push(make_pair(I_x, I_y));
	visited[I_x][I_y] = 1;

	while (!q.empty())
	{
		pair<int, int> cur = q.front();
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
				continue;
			if (map[nx][ny] == 'X')
				continue;
			if (visited[nx][ny] == 1)
				continue;
			if (map[nx][ny] == 'P')
				answer++;

			q.push(make_pair(nx, ny));
			visited[nx][ny] = 1;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	int I_x, I_y;

	for (int x = 0; x < n; x++)
	{
		for (int y = 0; y < m; y++)
		{
			cin >> map[x][y];

			//cout << map[x][y] << " is " << x << y << "\n";

			if (map[x][y] == 'I')
			{
				I_x = x;
				I_y = y;
			}
		}
	}

	bfs(I_x, I_y);

	if (answer == 0)
		cout << "TT";
	else
		cout << answer;

	return 0;
}