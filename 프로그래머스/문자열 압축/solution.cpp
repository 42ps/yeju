#include <iostream>
#include <string>
#include <vector>

// 00:40 시작
// 01:10 끝 (완료x)
// 09:10 시작
// 09:30 끝

using namespace std;

int solution(string s) {
  int answer = s.length();
  int count = 1;
  string zip = "";
  string result = "";

  for (int i = 1; i < s.length() / 2 + 1; i++) {
    zip = s.substr(0, i);

    for (int j = i; j < s.length(); j += i) {
      if (s.substr(j, i) == zip) {
        count++;
      } else {
        if (count > 1) {
          result += to_string(count);
        }
        result += zip;  // 중복되는 부분 밖으로 빼줌 (로직변경 x)
        zip = s.substr(j, i);
        count = 1;
      }
    }

    if (count > 1) {  // 추가된부분
      result += to_string(count);
    }
    result += zip;

    if (result.length() < answer) {
      answer = result.length();
    }
    result.clear();
    count = 1;  // 추가된부분 (98점 -> 100점)
  }

  return answer;
}
