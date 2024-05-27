#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	char input[50][50];
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cin >> input[i][j];

	char white_board[8][8] = {
			{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
			{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
			{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
			{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
			{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
			{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
			{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
			{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}};

	char black_board[8][8] = {
			{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
			{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
			{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
			{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
			{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
			{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
			{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
			{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}};

	int min_changes = 64;

	for (int i = 0; i <= n - 8; ++i)
	{
		for (int j = 0; j <= m - 8; ++j)
		{
			int cnt_white = 0, cnt_black = 0;
			for (int x = i; x < i + 8; ++x)
			{
				for (int y = j; y < j + 8; ++y)
				{
					if (input[x][y] != white_board[x - i][y - j])
						cnt_white++;
					if (input[x][y] != black_board[x - i][y - j])
						cnt_black++;
				}
			}
			min_changes = min(min_changes, min(cnt_white, cnt_black));
		}
	}

	cout << min_changes << endl;

	return 0;
}
