#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, count = 0, rest, total = 0;

	cin >> n;

	int schedule[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> schedule[i];
	}

	for (int i = 0; i < n*2; ++i)
	{
		rest = schedule[i%n];
		if (rest == 1)
		{
			count++;
		} else {
			if (count > total)
			{
				total = count;
			}
			count = 0;
		}
	}

	cout << total << endl;
	return 0;
}