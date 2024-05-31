// #include <iostream>
#include <vector>
// #include <map>
#include <set>
using namespace std;

// 10:55
// 11:05

int solution(vector<int> nums) {
  int answer = 0;
  set<int> s;

  //  문제요약: n/2개만 가져올 수 있을 때 최대한 다양하게 가져오는 방법

  for (int i = 0; i < nums.size(); i++) {
    s.insert(nums[i]);
  }

  // cout << s.size() << endl;

  answer = s.size();

  if (answer > nums.size() / 2) {
    answer = nums.size() / 2;
  }

  return answer;
}