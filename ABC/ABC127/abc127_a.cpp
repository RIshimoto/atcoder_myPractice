#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int a, b;
	int ans;
	cin >> a >> b;
	if (a >= 13)
		ans = b;
	else if (a >= 6)
		ans = b / 2;
	else
		ans = 0;
	cout << ans << endl;
	return 0;
}
