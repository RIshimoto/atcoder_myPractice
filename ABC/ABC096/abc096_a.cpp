#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int a, b;
	cin >> a >> b;
	if (a <= b)
		cout << a << endl;
	else
		cout << a - 1 << endl;
	return 0;
}
