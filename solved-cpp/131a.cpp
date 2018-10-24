#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
	string s;
	int lower = 0, upper = 0;

	cin >> s;

	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			lower++;
		} else {
			upper++;
		}
	}

	if (((s[0] >= 'a' && s[0] <= 'z') && upper == s.length() - 1))
	{
		s[0] = toupper(s[0]);
		for (int i = 1; i < s.length(); ++i)
		{
			s[i] = tolower(s[i]);
		}
	}

	if (upper == s.length())
	{
		for (int i = 0; i < s.length(); ++i)
		{
			s[i] = tolower(s[i]);
		}
	}

	cout << s << endl;

	return 0;
}