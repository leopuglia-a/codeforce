#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int n;
	int a = 0, d = 0;

	cin >> n >> str ;

	for (int i=0; i<n; ++i) {
		if (str[i] == 'A') {
			a++;
		} else if (str[i] == 'D'){
			d++;
		}
	}

	if (a > d) {
 		cout << "Anton" << endl;
	} else if(d > a){
		cout << "Danik" << endl;
	} else {
		cout << "Friendship" << endl;
	}

	return 0;
}