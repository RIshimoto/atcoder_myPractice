#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int a, b;
	cin >> a >> b;
	if (a * b % 2 == 0)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
	return 0;
}
