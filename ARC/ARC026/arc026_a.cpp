#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, a, b;
	cin >> n >> a >> b;
	if (n - 5 >= 0)
		cout << b * 5 + (n - 5) * a << endl;
	else
		cout << b * n << endl;
}
