#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	int sum;

	cin >> s;
	sum = 0;
	rep(i, s.size())
	{
		if (s[i] >= '0' && s[i] <= '9')
			sum = sum * 10 + (s[i] - '0');
	}
	cout << sum << endl;
	return 0;
}
