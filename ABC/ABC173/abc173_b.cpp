#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;

signed main(void)
{
	int n;
	cin >> n;
	map<string, int> mp;
	mp["AC"] = mp["WA"] = mp["TLE"] = mp["RE"] = 0;
	rep(i, n)
	{
		string s;
		cin >> s;
		mp[s]++;
	}
	cout << "AC x " << mp["AC"] << endl;
	cout << "WA x " << mp["WA"] << endl;
	cout << "TLE x " << mp["TLE"] << endl;
	cout << "RE x " << mp["RE"] << endl;
	return 0;
}
