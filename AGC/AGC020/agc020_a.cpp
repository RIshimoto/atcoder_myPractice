#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, a, b;
	cin >> n >> a >> b;
	if ((a - b) % 2 == 0)
		cout << "Alice" << endl;
	else
		cout << "Borys" << endl;
	return 0;
}
