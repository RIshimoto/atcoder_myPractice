#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	char a, b;
	cin >> a >> b;
	if ((a == 'H' && b == 'H')|| (a == 'D' && b == 'D'))
		cout << 'H' << endl;
	else
		cout << 'D' << endl;
	return 0;
}
