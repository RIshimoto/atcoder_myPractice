#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m, cnt;
	map<int, int> mp;

	cin >> n >> m;
	cnt = 0;
	rep(i, n)
	{
		int k;
		cin >> k;
		rep(j, k)
		{
			int a;
			cin >> a;
			mp[a]++;
		}
	}
	for(auto p : mp)
	{
		if (p.second == n)
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}
