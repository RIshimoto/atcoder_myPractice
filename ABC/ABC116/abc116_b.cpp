#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	set<int> st;
	int n, i;
	cin >> n;
	st.insert(n);
	i = 1;
	while(true)
	{
		if (n % 2 == 0) n = n / 2;
		else n = 3 * n + 1;
		if (!st.count(n))
			st.insert(n);
		else
			break;
		i++;
	}
	cout << i + 1 << endl;
	return 0;
}
