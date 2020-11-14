#include <iostream>
#include <ctype.h>

using namespace std;

int main() {
	int a, b, years = 0;
	
	cin >> a >> b;

	while (b >= a) {
		a = 3*a;
		b = 2*b;
		years++;
	}

	cout << years << endl;

	return 0;
}