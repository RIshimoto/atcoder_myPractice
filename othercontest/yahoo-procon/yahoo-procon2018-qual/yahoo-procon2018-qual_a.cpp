#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	string s;
	cin >> s;
	if (s.substr(0, 3) == "yah" && s[3] == s[4])
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
