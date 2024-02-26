#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;



int main() {
	int num, max;
	int apr= 100;

	cin >> num >> max;
	vector<int>card;

	for (int i = 0; i < num; i++)
	{
		int value;
		cin >> value;
		card.push_back(value);
	}
	sort(card.begin(), card.end());

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			for (int k = 0; k < num; k++) {
				int result = max;

				if (i != j && j != k && k != i)
					result = card[i] + card[j] + card[k] - max;
				if (result > 0)
					break;
				apr = (apr < result) ? result : apr;
			}
		}
	}

	cout << max + apr;

}