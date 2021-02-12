#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	string s;
	long long sum, r, g, b;

	cin >> n >> s;
	r = g = b = 0;
	rep(i, n)
	{
		if (s[i] == 'R') r++;
		else if (s[i] == 'G') g++;
		else if (s[i] == 'B') b++;
	}
	sum = r * g * b; 
	rep(i, n - 1)
	{
		for(int j = i + 1; j < n; j++)
		{
			int k = 2 * j - i;
			if (k >= n) continue;
			if (s[i] != s[j] && s[j] != s[k] && s[i] != s[k])
				sum--;
		}
	}
	cout << sum << endl;
	return 0;
}
