#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;

signed main(void)
{
	string s;
	int ans;
	cin >> s;
	ans = 0;
	rep(i, s.size())
	{
		if (s[i] == '+')
			ans++;
		else
			ans--;
	}
	cout << ans << endl;
	return 0;
}
