#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int keta(int x)
{
	int sum;

	sum = 1;
	while(x / 10)
	{
		x /= 10;
		sum++;
	}
	return sum;
}

signed main(void)
{
	int a, b, cnt, tmp;
	bool ok;

	cin >> a >> b;
	cnt = 0;
	for(int i = a; i <= b; i++)
	{
		vector<int> v;
		tmp = i;
		while (tmp / 10)
		{
			v.push_back(tmp % 10);
			tmp /= 10;
		}
		v.push_back(tmp);
		ok = true;
		for(int j = 0; j < 2; j++)
			if (v.at(j) != v.at(4 - j))
				ok = false;
		if (ok)
		{
			//cout << i << endl;
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}
