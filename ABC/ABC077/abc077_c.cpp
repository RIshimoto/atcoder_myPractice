#include <bits/stdc++.h>
#define FOR(i, a, b) for(long long i = (a); i < (b); i++)
#define rep(i, n) for(long long i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	long long n, ans;
	long long a_cnt, c_cnt;
	cin >> n;
	vector<long long> a(n), b(n), c(n);

	rep(i, n) cin >> a.at(i);
	rep(i, n) cin >> b.at(i);
	rep(i, n) cin >> c.at(i);
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	sort(c.begin(), c.end());
	a_cnt = 0;
	c_cnt = 0;
	ans = 0;
	rep(i, n)
	{
		auto Iter1 = lower_bound(a.begin(), a.end(), b[i]);
		a_cnt = Iter1 - a.begin();
		auto Iter2 = upper_bound(c.begin(), c.end(), b[i]);
		c_cnt = c.end() - Iter2;
		ans += a_cnt * c_cnt;
	}
	cout << ans << endl;
	return 0;
}
