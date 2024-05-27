#include <iostream>
#include <algorithm>

using namespace std;

string tmp = "";
int result = 0;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string input;

	cin >> input;

	bool minus = false;
	for (int i = 0; i <= input.size(); i++)
	{
		if (!(input[i] == '+' || input[i] == '-' || input[i] == '\0')) // 숫자 (공백으로도 끝남)
		{
			tmp += input[i];
		}
		else // 기호
		{
			if (minus)
			{
				result -= stoi(tmp);
			}
			else
			{
				result += stoi(tmp);
			}
			tmp = "";
			if (input[i] == '-')
			{
				minus = true;
			}
		}
	}

	cout << result << '\n';
	return 0;
}