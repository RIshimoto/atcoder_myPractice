#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	int n, x, ans;
	string s;
	cin >> n >> s;
	x = ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'I')
			x++;
		else if (s[i] == 'D')
			x--;
		ans = max(ans, x);
	}
	cout << ans << endl;
	return 0;
}
