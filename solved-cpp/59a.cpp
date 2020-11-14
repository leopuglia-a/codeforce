#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main() {
	string s; 
	cin >> s;

	int t = s.size();
	int u = 0;
	int l = 0;

	for (int i = 0; i < t; ++i)
	{
		if (islower(s[i])) {
			l++;
		} else {
			u++;
		}
	}

	l >= u ? for_each(s.begin(), s.end(), [](char & c) {c = tolower(c); }) : for_each(s.begin(), s.end(), [](char & c) {c = toupper(c);});

	cout << s << endl;

	return 0;
}