#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	char c;
	string s;
	cin >> c >> s;
	rep(i, s.size())
	{
		if (s[i] == c) continue;
		cout << s[i];
	}
	cout << endl;
	return 0;
}
