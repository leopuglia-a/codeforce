#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int lucky_digit = 0;
	
	while(cin >> str) {
		for (int i=0; i<str.size(); ++i) {
			if (str[i] == '4' || str[i] == '7') {
				lucky_digit++;
			}
		}

		if (lucky_digit == 4 || lucky_digit == 7) {
	 		cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}