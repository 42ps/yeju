#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int num_scores;
	cin >> num_scores;

	double total_score = 0;
	double max_score = -1;
	vector<double> scores(num_scores);

	for (int i = 0; i < num_scores; ++i)
	{
		cin >> scores[i];
		total_score += scores[i];
		max_score = max(max_score, scores[i]);
	}

	double average_percentage = (total_score / max_score / num_scores) * 100;
	cout << average_percentage;

	return 0;
}
