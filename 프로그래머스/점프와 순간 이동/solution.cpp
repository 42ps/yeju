#include <iostream>
using namespace std;

// 3:32 ~ 3:45
// 문제요약: +k칸 or 현위치*2 로 이동 가능. +k칸 이동은 -k배터리 소모
// n으로 가야할 때 사용해야하는 배터리 최솟값 구하기

int solution(int n) {
  int ans = 0;

  for (int i = n; i > 0;) {
    if (i % 2 == 1) {  // 홀수면 1칸은 걸어이동
      ans++;
      i -= 1;
    }

    i /= 2;  // 순간이동
  }

  return ans;
}