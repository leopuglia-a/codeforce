#include <iostream>
#include <vector>

using namespace std;

int main() {
	string s, t;
	vector<char> v;

	cin >> s;

	cin >> t;
	
	int i = 0;

	while (t[i])
	{
		if (t[i] == s[s.length() - (i+1)])
		{
			i++;
			continue;
		} else {
			cout << "NO" << endl;
			return 0;
		}
	}

	cout << "YES" << endl;

	return 0;
}