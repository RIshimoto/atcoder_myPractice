#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	if (n < 105)
		cout << 0 << endl;
	else if (n < 135)
		cout << 1 << endl;
	else if (n < 165)
		cout << 2 << endl;
	else if (n < 189)
		cout << 3 << endl;
	else if (n < 195)
		cout << 4 << endl;
	else
		cout << 5 << endl;
	return 0;
}
