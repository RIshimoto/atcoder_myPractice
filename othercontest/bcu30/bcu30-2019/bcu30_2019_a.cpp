#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, k, sum;
	cin >> n >> k;
	vector<int> vec(n);

	sum = 0;
	rep(i, n) 
	{
		cin >> vec[i];
		sum += vec[i];
	}
	sort(vec.begin(), vec.end());
	rep(i, n - k)
	{
		sum += vec[i];
	}
	cout << sum << endl;
	return 0;
}
