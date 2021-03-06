#include <bits/stdc++.h>
#define FOR(i, a, b) for(long long i = (a); i < (b); i++)
#define rep(i, n) FOR(i, 0, n)
using namespace std;

signed main(void)
{
	long long n, ans;
	cin >> n;
	map<long long, long long> m;

	rep(i, n)
	{
		long long a;
		cin >> a;
		m[a]++;
	}
	ans = 0;
	for(auto p : m)
	{
		auto k = p.first;
		auto v = p.second;
		if (k < v)
			ans += v - k;
		else if (k > v)
			ans += v;
	}
	cout << ans << endl;
	return 0;
}
