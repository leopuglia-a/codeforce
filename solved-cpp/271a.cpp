#include <iostream>
#include <set>

using namespace std;

int main() {
	int y, year;
	bool found = false;

	cin >> y;

	do {
		y++;
		set<int> s;
		int aux = y;	
		while (aux > 0) {
			int digit = aux % 10;
			s.insert(digit);
			aux /= 10;
		}

		if (s.size() == 4)
		{
			cout << y << endl;
			found = true;
		}
	}while(!found);

	return 0;
}