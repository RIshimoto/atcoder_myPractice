#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	int a, b, c;
	cin >> a >> b >> c;

	if ((a == b && b == c && a == c)|| (a != b && b != c && a != c))
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
	return 0;
}
