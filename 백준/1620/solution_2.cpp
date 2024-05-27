#include <iostream>
#include <algorithm>

#include <unordered_map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;

	cin >> n >> m;

	unordered_map<string, int> list_for_string;
	unordered_map<int, string> list_for_int;

	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;

		list_for_string.insert(make_pair(input, i + 1));
		list_for_int.insert(make_pair(i + 1, input));
	}

	for (int i = 0; i < m; i++)
	{
		string search;
		cin >> search;

		if (isdigit(search[0]))
		{
			int num = stoi(search);
			cout << list_for_int[num] << "\n";
		}
		else
		{
			cout << list_for_string[search] << "\n";
		}
	}
}