#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, answer = 0;

	cin >> n;

	for (int i = 5; i <= n; i *= 5)
	{
		answer += n / i;
	}

	cout << answer;

	return 0;
}