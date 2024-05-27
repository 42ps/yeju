#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

int map[101][101];
int visited[101][101] = {0};

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int n, m;

void bfs() {
  queue<pair<int, int> > q;
  visited[0][0] = 1;
  q.push(make_pair(0, 0));

  while (!q.empty()) {
    int x, y;

    x = q.front().first;
    y = q.front().second;
    // tie(x, y) = q.front();

    q.pop();

    for (int i = 0; i < 4; i++) {
      int nx = x + dx[i];
      int ny = y + dy[i];
      if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
      if (map[ny][nx] == 0) continue;
      if (visited[ny][nx] != 0) continue;

      visited[ny][nx] = visited[y][x] + 1;
      q.push(make_pair(nx, ny));
    }
  }

  cout << visited[n - 1][m - 1] << endl;
  return;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  cin >> n >> m;

  string temp;

  for (int i = 0; i < n; i++) {
    cin >> temp;
    for (int j = 0; j < m; j++) {
      map[i][j] = temp[j] - '0';
    }
    temp = "";
  }

  bfs();

  return 0;
}
