#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string day;
	cin >> day;
	if 	(day == "Monday")
		cout << 5 << endl;
	else if (day == "Tuesday")
		cout << 4 << endl;
	else if (day == "Wednesday")
		cout << 3 << endl;
	else if (day == "Thursday")
		cout << 2 << endl;
	else if (day == "Friday")
		cout << 1 << endl;
	else if (day == "Saturday" || day == "Sunday")
			cout << 0 << endl;
	return 0;
}
