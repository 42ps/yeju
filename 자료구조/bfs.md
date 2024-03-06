[BFS_위키피디아](https://ko.wikipedia.org/wiki/%EB%84%88%EB%B9%84_%EC%9A%B0%EC%84%A0_%ED%83%90%EC%83%89)

> 너비 우선 탐색(Breadth-first search, BFS)은 맹목적 탐색방법의 하나로 시작 정점을 방문한 후 시작 정점에 인접한 모든 정점들을 우선 방문하는 방법이다.

## 설계
큐를 이용하여 구현한다.
1. 시작지점을 방문하고, 동시에 시작지점과 연결되어있는 지점(노드)들을 큐에 넣는다.
2. 큐에 담긴 노드를 하나 pop하며 방문 표시를 해주고, 새로 방문한 노드에 인접한 노드들을 큐에 이어서 담아준다. (이때 한 번 큐에 들어갔던 노드는 다시 담지 않는다.)
3. 큐가 모두 빌 때까지 위를 반복해준다.

## 구현 (인접행렬)
```cpp
#include <queue>
#include <algorithm>

void bfs(int[][] graph, boolean[][] visited, int start_x, int start_y) {
	queue<pair<int, int>> q;
	int dx[4] = {-1, 1, 0, 0};
	int dy[4] = {0, 0, 1, -1};

	q.push[{start_x, start_y}];
	visited[x][y] = true;

	while (!q.empty()) {
		int current = q.front();
		q.pop();

		cout << current; //do something

		for (int i = 0; i < 4; i++) {
			nx = dx[i] + current.first;
			ny = dy[i] + current.second;

			// if (graph를 벗어남)
			// 	continue;
			if (!visited[nx][ny] && graph[nx][ny]) {
				visited[nx][ny] = true;
				q.push({nx, ny});
			}
		}
	}
}

```

## 시간복잡도
인접행렬: O(V^2)
인접리스트: O(V+E)
> V: 정점의 개수, E: 간선의 개수

## 추가
주로 최단거리를 찾을 때 사용된다.