#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, l;
	int tab, cnt;
	string s;

	cin >> n >> l >> s;
	tab = 1;
	cnt = 0;
	rep(i, n)
	{
		if (s[i] == '+')
		{
			tab++;
			if (tab > l)
			{
				cnt++;
				tab = 1;
			}
		}
		else if (s[i] == '-')
			tab--;
	}
	cout << cnt << endl;
	return 0;
}
