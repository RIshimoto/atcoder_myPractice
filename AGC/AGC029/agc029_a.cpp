#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	long long ans;
	int cnt;
	cin >> s;
	ans = cnt = 0;
	rep(i, s.size())
	{
		if (s[i] == 'W')
			ans += cnt;
		else
			cnt++;
	}
	cout << ans << endl;
	return 0;
}
