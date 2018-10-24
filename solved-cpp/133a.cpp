#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	bool output = false;

	cin >> s;

	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
		{
			output = true;
		}
	}

	if (output)
	{
		cout << "YES" << endl;
		return 0;
	}

	cout << "NO" << endl;

	return 0;
}