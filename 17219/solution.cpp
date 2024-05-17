#include <algorithm>
#include <iostream>
#include <map>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  map<string, string> passwords;

  int n, m;

  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    string site, password;
    cin >> site >> password;

    passwords[site] = password;
  }

  for (int i = 0; i < m; i++) {
    string site;
    cin >> site;

    cout << passwords[site] << '\n';
  }

  return 0;
}