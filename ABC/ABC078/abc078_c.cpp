#include <bits/stdc++.h>
using namespace std;

const int ac = 100;
const int tle = 1900;
int main(void)
{
	int n, m, ans;
	cin >> n >> m;

	ans = 0;
	ans = ((n - m) * ac + m * tle) * pow(2, m);
	cout << ans << endl;
	return 0;
}
