#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, sum, ave1, ave2, ans1, ans2, ans;
	cin >> n;
	int a[n];
	sum = ave1 = ave2 = ans1 = ans2 = ans = 0;
	rep(i, n)
	{
		cin >> a[i];
		sum += a[i];
	}
	ave1 = sum / n;
	ave2 = ave1 + 1;
	rep(i, n)
	{
		ans1 += abs(a[i] - ave1) * abs(a[i] - ave1);
		ans2 += abs(a[i] - ave2) * abs(a[i] - ave2);
	}
	ans = min(ans1, ans2);
	cout << ans << endl;
	return 0;
}
