#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if (a * b > c * d)
		cout << a * b << endl;
	else
		cout << c * d << endl;
	return 0;
}
