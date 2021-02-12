#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int n, m, q;
	cin >> n >> m >> q;
	int color[n];
	vector<int> graph[n];
	rep(i, m)
	{
		int u, v;
		cin >> u >> v;
		u--; v--;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	rep(i, n) cin >> color[i];
	rep(i, q)
	{
		int a, b, c;
		cin >> a;
		if (a == 1)
		{
			cin >> b;
			b--;
			cout << color[b] << endl;
			for(auto u : graph[b])
				color[u] = color[b];
		}
		else if (a == 2)
		{
			cin >> b >> c;
			b--;
			cout << color[b]<< endl;
			color[b]= c;
		}
	}
	return 0;
}
