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
		int a, b;
		cin >> a >> b;
		ans += a * b;
	}
	ans = (int) ans * 1.05;
	cout << ans << endl;
	return 0;
}
