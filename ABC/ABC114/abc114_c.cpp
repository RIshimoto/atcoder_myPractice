#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int n, ans;
bool check(long long x)
{
	bool flag[3];
	rep(i, 3) flag[i] = false;
	if (x < 357)
		return false;
	while(x)
	{
		int y = x % 10;
		if (y == 3)
			flag[0] = true;
		else if (y == 5)
			flag[1] = true;
		else if (y == 7) 
			flag[2] = true;
		x /= 10;
	}
	rep(i, 3)
	{
		if (!flag[i])
			return false;
	}
	return true;
}
void dfs(long long x)
{
	if (x > n)
		return;
	else
	{
		if (check(x)) ans++;
		dfs(10 * x + 3);
		dfs(10 * x + 5);
		dfs(10 * x + 7);
	}
}

signed main(void)
{
	cin >> n;
	ans = 0;
	dfs(0);
	cout << ans << endl;
	return 0;
}
