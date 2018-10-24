#include <iostream>

using namespace std;

int main() {
	int n, rooms = 0, a, b;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> a >> b;

		if (b - a >= 2)
		{
			rooms++;
		}
	}

	cout << rooms << endl;

	return 0;
}