#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;

signed main(void)
{
	int n, m, sum;
	cin >> n >> m;
	vector<int> x(m), diff(m - 1);
	
	rep(i, m) cin >> x[i];
	sort(x.begin(), x.end());
	rep(i, m - 1) diff[i] = abs(x[i + 1] - x[i]);
	sort(diff.begin(), diff.end());
	sum = 0;
	rep(i, m - n)
	{
		sum += diff[i];
	}
	cout << sum << endl;
	return 0;
}
