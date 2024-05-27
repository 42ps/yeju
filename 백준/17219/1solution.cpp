#include <algorithm>
#include <iostream>

int main() {
  int n, m;
  std::cin >> n >> m;

  int arr[100][100] = {
      0,
  };

  int num = 1;

  // 가장 마지막에 채워지는 수는 n + m - 1
  for (int i = 0; i < n + m - 1; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < m; k++) {
        // 행과 열이 같은 수를 가지는 경우 쭉 채움
        if (j + k == i) {
          arr[j][k] = num++;
        }
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      std::cout << arr[i][j] << ' ';
    }
    std::cout << '\n';
  }

  return 0;
}