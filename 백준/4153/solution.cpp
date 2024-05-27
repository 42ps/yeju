#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int x, y, z;
	while (1)
	{
		cin >> x >> y >> z;

		if (x == 0 && y == 0 && z == 0)
		{
			return 0;
		}

		if (x > y)
		{
			swap(x, y);
		}
		if (y > z)
		{
			swap(y, z);
		}

		if (x * x + y * y == z * z)
		{
			cout << "right" << endl;
		}
		else
		{
			cout << "wrong" << endl;
		}
	}
	return 0;
}