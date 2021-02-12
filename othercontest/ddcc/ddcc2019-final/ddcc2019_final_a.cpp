#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, cnt, mx;
	double ans;
	string s;
	
	cin >> n >> s;
	mx = cnt = ans = 0;
	rep(i, n)
	{
		if (s[i] == '>')
		{
			cnt++;
			mx = max(mx, cnt);
		}
		else
		{
			cnt = 0;
		}
		ans += (double)1 / (cnt + 1);
	}
	ans--;
	ans += (double) 1 / (mx + 2);
	cout << fixed << setprecision(20) << ans << endl;
	return 0;
}
