#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int a, b, c;
	cin >> a >> b >> c;

	if (c >= a && c <= b)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
