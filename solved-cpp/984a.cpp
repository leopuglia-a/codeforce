#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, a;
	vector<int> v;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n/2; ++i)
	{
		v.pop_back();
	}

	cout << v.back() << endl;

	return 0;
}