#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
  string answer = "";

  vector<pair<char, char>> p = {
      {'R', 'T'}, {'C', 'F'}, {'J', 'M'}, {'A', 'N'}};  // 유형 종류

  map<char, int> m = {{'R', 0}, {'T', 0}, {'C', 0},
                      {'F', 0}, {'J', 0}, {'M', 0}};  //<유형, 점수>

  // for (auto& e : survey) {
  for (int i = 0; i < survey.size(); i++) {
    int score = choices[i];
    if (score < 4) m[survey[i].at(0)] += (4 - score);
    if (score == 4) continue;
    if (score > 4) m[survey[i].at(1)] += (score - 4);
  }

  for (auto& e : p) {
    char first = e.first;
    char second = e.second;

    if (m[first] > m[second]) {
      answer += first;
    } else if (m[first] < m[second]) {
      answer += second;
    } else {
      answer += (first < second) ? first : second;
    }
  }

  return answer;
}