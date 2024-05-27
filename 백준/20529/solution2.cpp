#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

using namespace std;

int mind(string a, string b)
{
	int count = 0;
	for (int i = 0; i < 4; i++)
	{
		if (a[i] != b[i])
			++count;
	}
	return count;
}

void solution()
{
	int n;
	cin >> n;

	int result = INT_MAX;
	vector<string> v;

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	if (n > 32)
	{
		cout << 0 << "\n";
		return;
	}
	else
	{
		for (int i = 0; i < n - 2; i++)
		{
			for (int j = i + 1; j < n - 1; j++)
			{
				for (int k = j + 1; k < n; k++)
				{
					int count = mind(v[i], v[j]) + mind(v[j], v[k]) + mind(v[i], v[k]);
					result = min(result, count);
				}
			}
		}
		cout << result << "\n";
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;

	cin >> t;

	while (t--)
	{
		solution();
	}
}