#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	char a[n][n];
	rep(i, n) rep(j, n) cin >> a[i][j];
	rep(j, n)
	{
		for (int i = n - 1; i >= 0; i--)
			cout << a[i][j];
		cout << endl;
	}
	return 0;
}
