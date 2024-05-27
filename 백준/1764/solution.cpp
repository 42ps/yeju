#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;

	cin >> n >> m;

	set<string> s;
	set<string> result_list;

	for (int i = 0; i < n; i++)
	{
		string listen;
		cin >> listen;
		s.insert(listen);
	}

	for (int i = 0; i < m; i++)
	{
		string look;
		cin >> look;

		if (s.find(look) != s.end())
		{
			result_list.insert(look);
		}
	}

	cout << result_list.size() << '\n';
	for (auto i : result_list)
	{
		std::cout << i << '\n';
	}
}