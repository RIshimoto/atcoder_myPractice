#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	int a[4];
	cin >> s ;
	rep(i, 4) {cin >> a[i]; a[i] += i;}
	rep(i, 4)
	{
		auto it = s.begin() + a[i];
		s.insert(it, '"');
	}
	cout << s << endl;
	return 0;
}
