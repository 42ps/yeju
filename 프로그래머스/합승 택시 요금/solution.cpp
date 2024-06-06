// #include <iostream>
#include <vector>

using namespace std;

#define INF 99999

int solution(int n, int s, int a, int b, vector<vector<int>> fares) {
  int answer = INF;

  vector<vector<int>> dist(n, vector<int>(n, INF));
  for (int i = 0; i < n; i++) dist[i][i] = 0;

  for (auto fare : fares) {
    dist[fare[0] - 1][fare[1] - 1] = fare[2];
    dist[fare[1] - 1][fare[0] - 1] = fare[2];
  }

  // 더 짧은 거리 구하기
  for (int k = 0; k < n; k++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
      }
    }
  }

  // for (auto& e : dist) {
  //   for (auto& l : e) {
  //     cout << l << " ";
  //   }
  //   cout << endl;
  // }

  // 합승 후 각자 집
  for (int i = 0; i < n; i++) {
    int total = dist[s - 1][i] + dist[i][a - 1] + dist[i][b - 1];

    answer = min(answer, total);
  }

  return answer;
}
