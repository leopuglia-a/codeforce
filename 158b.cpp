#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, b, taxi = 0, sum = 0;
	vector<int> v;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> b;
		v.push_back(b);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); ++i)
	{
		if (v[i] + sum < 4)
		{
			sum += v[i];
		} else if (v[i] + sum == 4)
		{
			taxi++;
			sum = 0;
		} else {
			taxi++;
			sum = v[i];
		}
	}

	if (sum != 0)
	{
		taxi++;
	}

	cout << taxi << endl;

	return 0;
}