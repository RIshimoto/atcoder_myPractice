#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	cin >> s;
	long long n, m, sum;
	bool flag;
	n = m = 0;
	sum = 0;
	flag = false;
	rep(i, s.size())
	{
		if (s[i] == '<')
		{
			if (flag)
			{
				if (m > n)
				{
					sum += m * (m + 1) / 2;
					sum += n * (n - 1) / 2;
				}
				else
				{
					sum += m * (m - 1) / 2;
					sum += n * (n + 1) / 2;
				}
				n = 0;
				m = 0; 
				flag = false;
			}
			m++;
		}
		else if (s[i] == '>')
		{
			flag = true;
			n++;
		}
	}
	if (m > n)
	{
		sum += m * (m + 1) / 2;
		sum += n * (n - 1) / 2;
	}
	else
	{
		sum += m * (m - 1) / 2;
		sum += n * (n + 1) / 2;
	}
	cout << sum;
	return 0;
}
