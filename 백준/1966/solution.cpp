#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int count;
	cin >> count;

	while (count--)
	{
		int num, target;
		cin >> num >> target;

		int count = 0;

		queue<pair<int, int>> q;
		priority_queue<int> pq;

		for (int i = 0; i < num; ++i)
		{
			int priority;
			cin >> priority;

			q.push({i, priority});
			pq.push(priority);
		}

		while (!q.empty())
		{
			int idx = q.front().first;
			int priority = q.front().second;
			q.pop();

			if (pq.top() == priority)
			{
				pq.pop();
				count++;

				if (idx == target)
				{
					cout << count << '\n';
					break;
				}
			}
			else
			{
				q.push({idx, priority});
			}
		}
	}

	return 0;
}
