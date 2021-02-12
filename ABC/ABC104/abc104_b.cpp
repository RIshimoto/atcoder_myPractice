#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	map<char, int> mp;
	bool ok;
	cin >> s;
	ok = true;
	if (s[0] != 'A') ok = false;
	mp['C'] = 0;
	if ('a' > s[1] || s[1] > 'z') ok = false;
	for(int i = 2; i < s.size() - 1; i++) mp[s[i]]++;
	for(auto p : mp)
	{
		if (p.first == 'C')
		{
			if(p.second != 1)
				ok = false;
		}
		else
		{
			if ('a' > p.first || p.first > 'z')
				ok = false;
		}
	}
	if ('a' > s[s.size() - 1] || s[s.size() - 1] > 'z') ok = false;
	if (ok)
		cout << "AC" << endl;
	else
		cout << "WA" << endl;
	return 0;
}
