#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	int odd, even;

	cin >> s;
	reverse(s.begin(), s.end());
	odd = even = 0;
	rep(i, s.size())
	{
		if (i % 2 == 0)
			even += s[i] - '0';
		else
			odd += s[i] - '0';
	}
	cout << odd << " " << even << endl;
	return 0;
}
