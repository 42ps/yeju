#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

// 11:30 ~ 12:00 (미완)
// 12:00 ~ 12:20 (미완)

// 11:15 ~ 11:30 (성공)

bool cmp(pair<string, int> a, pair<string, int> b) {
  return a.second > b.second;
}

bool cmp2(pair<int, int> a, pair<int, int> b) {
  if (a.first == b.first) {
    return a.second < b.second;  // second인 번호 정렬 잘 확인하기
  }
  return a.first > b.first;
}

vector<int> solution(vector<string> genres, vector<int> plays) {
  // 문제요약: 정렬하기 (많이재생된장르 - 많이재생된노래 - 고유번호가낮은노래)
  vector<int> answer;

  map<string, int> m;                      //<장르, 총재생횟수>
  map<string, vector<pair<int, int>>> m2;  //<장르, [<재생횟수, 번호>] >

  for (int i = 0; i < genres.size(); i++) {
    m[genres[i]] += plays[i];
    m2[genres[i]].push_back(make_pair(plays[i], i));
  }

  vector<pair<string, int>> v(m.begin(), m.end());
  sort(v.begin(), v.end(), cmp);

  for (const auto& genre : v) {  // 장르 2개만 돌지 않고 모두 돌기
    vector<pair<int, int>> plays = m2[genre.first];
    sort(plays.begin(), plays.end(), cmp2);

    answer.push_back(plays[0].second);
    if (plays.size() > 1) {
      answer.push_back(plays[1].second);
    }
  }

  return answer;
}