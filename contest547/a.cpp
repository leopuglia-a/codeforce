#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, m, d, counter = -1;

	cin >> n >> m;

	if (m % n == 0)
	{	
		counter = 0;
		d = m / n;
		while (d != 1) 
		{
			if (d % 3 == 0)
			{
				d /= 3;
				counter++;
			} else if (d % 2 == 0) {
				d /= 2;
				counter++;
			} else {
				break;
			}
		}
	}
	cout << counter << endl;

	return 0;
}