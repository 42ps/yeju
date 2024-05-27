#include <iostream>
#include <string>

using namespace std;

int solution(string s) {
  int answer = 0;
  string answer_s = "";

  for (size_t i = 0; i < s.length(); i++) {
    if ('0' <= s[i] && s[i] <= '9') {
      answer_s += s[i];
    } else if (s[i] == 'z') {
      answer_s += "0";
      i += 3;
    } else if (s[i] == 'o') {
      answer_s += "1";
      i += 2;
    } else if (s[i] == 't') {
      if (s.substr(i, 3) == "two") {
        answer_s += "2";
        i += 2;
      } else if (s.substr(i, 5) == "three") {
        answer_s += "3";
        i += 4;
      }
    } else if (s[i] == 'f') {
      if (s.substr(i, 4) == "four") {
        answer_s += "4";
        i += 3;
      } else if (s.substr(i, 4) == "five") {
        answer_s += "5";
        i += 3;
      }
    } else if (s[i] == 's') {
      if (s.substr(i, 3) == "six") {
        answer_s += "6";
        i += 2;
      } else if (s.substr(i, 5) == "seven") {
        answer_s += "7";
        i += 4;
      }
    } else if (s.substr(i, 5) == "eight") {
      answer_s += "8";
      i += 4;
    } else if (s.substr(i, 4) == "nine") {
      answer_s += "9";
      i += 3;
    }
  }

  answer = stoi(answer_s);
  return answer;
}

int main() {
  string s = "one4seveneight";
  cout << solution(s) << endl;
  return 0;
}
