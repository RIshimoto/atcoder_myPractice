#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int main(void)
{
	int cnt, l, r;
	map<int, int> mp, sp;
	cin >> l >> r;
	rep(i, l)
	{
		int a;
		cin >> a;
		mp[a]++;
	}
	rep(i, r)
	{
		int a;
		cin >> a;
		sp[a]++;
	}
	cnt = 0;
	for(auto p : mp)
	{
		auto k = p.first;
		auto v = p.second;
		if (sp.count(k))
		{
			cnt += min(v, sp[k]);
		}
	}
	cout << cnt << endl;
	return 0;
}
