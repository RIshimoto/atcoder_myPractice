#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int t;
	cin >> t;
	rep(i, t)
	{
		ll n, a, b, c, d, tmp;
		cin >> n >> a >> b >> c >> d;
		ll ans = 1e18;
		tmp = n / 5;
		ans = min(tmp * c + (n - tmp * 5 + 1) * d, ans);
		cout << "a" << ans << endl;
		if (n % 5 != 0) tmp++;
		ans = min(ans, tmp * c + (tmp * 5 - n + 1) * d);
		cout << "b" << ans << endl;

		tmp = n / 3;
		ans = min(ans, tmp * b + (n - tmp * 3 + 1) * d);
		cout << "c" << ans << endl;
		if (n % 3 != 0) tmp++;
		ans = min(ans, tmp * b + (tmp * 3 - n + 1) * d);
		cout << "d" << ans << endl;

		tmp = n / 2;
		ans = min(ans, tmp * a + (n - tmp * 2 + 1) * d);
		cout << "e" << ans << endl;
		if (n % 3 != 0) tmp++;
		ans = min(ans, tmp * 2 + d);
		cout << "f" << ans << endl;
		cout << ans << endl;
	}
	return 0;
}
