#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	long long q, n, a, b, cost = 0;

	cin >> q;

	for (int i = 0; i < q; ++i)
	{
		cin >> n >> a >> b;
		
		if (b/a >= 2 )
		{
			cout << n*a << endl;
		} else {
			cout << (b*(n/2) + a*(n%2)) << endl;
		}

	}
	return 0;
}