#include <iostream>
#include <string>
#include <vector>

// 00:40 시작
// 01:10 끝 (완료x)

using namespace std;

int solution(string s) {
  int answer = 0;
  int count = 0;
  string zip = "";
  string result = "";

  for (int i = 0; i < s.length() / 2; i++) {
    cout << "i: " << i << endl;
    zip = s.substr(0, i);
    if (zip == "") continue;
    cout << "zip: " << zip << endl;

    count = 1;
    for (int j = i + count; j < s.length(); j++) {
      if (s.substr(j, i) == zip) {
        count++;
        cout << "substr: " << s.substr(j, i) << endl;
        cout << "count: " << count << endl;
      }
    }

    if (count > 1) {
      result += to_string(count);
      result += zip;
      i += count;
    }
    cout << result << endl;
  }

  return answer;
}

int main() {
  string s = "aabbaccc";
  cout << solution(s) << endl;
}