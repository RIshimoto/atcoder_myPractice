#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, ans;
	cin >> n;
	ans = 0;
	rep(i, n)
	{
		int a;
		cin >> a;
		while(a % 2 == 0)
		{
			a /= 2;
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
