#include <iostream>
#include <algorithm>

using namespace std;

int cmp(string a, string b)
{
	if (a.length() == b.length())
	{
		return a < b;
	}
	else
	{
		return a.length() < b.length();
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string input[20000];
	int n;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> input[i];
	}

	sort(input, input + n, cmp);

	for (int i = 0; i < n; ++i)
	{
		if (input[i] != input[i - 1])
			cout << input[i] << "\n";
	}

	return 0;
}
