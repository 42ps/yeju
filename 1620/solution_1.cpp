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

	pair<int, string> Pokedex[n];

	for (int i = 0; i < n; i++)
	{
		Pokedex[i].first = i + 1;
		cin >> Pokedex[i].second;
	}

	for (int i = 0; i < m; i++)
	{
		string search;

		cin >> search;

		if (isdigit(search[0]))
		{
			cout << Pokedex[stoi(search) - 1].second << '\n';
		}
		else
		{
			for (int j = 0; j < n; j++)
			{
				if (Pokedex[j].second == search)
				{
					cout << Pokedex[j].first << '\n';
					break;
				}
			}
		}
	}
}