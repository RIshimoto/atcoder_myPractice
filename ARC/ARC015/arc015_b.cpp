#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	vector<int> v(6);
	int n;

	cin >> n;
	rep(i, n)
	{
		double MT, mT;
		cin >> MT >> mT;
		if (35 <= MT)
			v[0]++;
		if (30 <= MT && MT < 35)
			v[1]++;
		if (25 <= MT && MT < 30)
			v[2]++;
		if (25 <= mT)
			v[3]++;
		if (mT < 0 && MT >= 0)
			v[4]++;
		if (MT < 0)
			v[5]++;
	}
	rep(i, 6) printf("%d%c", v[i], i != 5?' ':'\n');
	return 0;
}
