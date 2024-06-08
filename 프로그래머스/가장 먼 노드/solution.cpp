// 0608
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

// 12:27-29 문제
// 12:29-32 설계
// 12:51 구현
// 13:00 공부

int solution(int n, vector<vector<int>> edge) {
  int answer = 0;

  vector<vector<int>> graph(n + 1);
  vector<int> dist(n + 1, -1);  // 각 노드까지의 거리

  for (auto& e : edge) {
    graph[e[0]].push_back(e[1]);
    graph[e[1]].push_back(e[0]);
  }

  // 거리 구하기
  queue<int> q;
  dist[1] = 0;  // 1번 노드는 0
  q.push(1);    // 출발지점 넣기

  // BFS
  while (!q.empty()) {
    int node = q.front();
    q.pop();

    for (int neighbor : graph[node]) {
      if (dist[neighbor] == -1) {  // 아직 방문하지 않은 노드
        dist[neighbor] = dist[node] + 1;
        q.push(neighbor);
      }
    }
  }

  int maxDist = 0;
  for (int i = 1; i <= n; ++i) {
    if (dist[i] > maxDist) {
      maxDist = dist[i];
    }
  }

  for (int i = 1; i <= n; ++i) {
    if (dist[i] == maxDist) {
      answer++;
    }
  }

  return answer;
}