#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << min(a, b) + min(c, d) << endl;
	return 0;
}
