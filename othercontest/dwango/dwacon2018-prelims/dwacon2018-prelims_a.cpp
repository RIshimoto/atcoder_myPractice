#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	cin >> s;
	if (s[0] == s[2] && s[1] == s[3])
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}