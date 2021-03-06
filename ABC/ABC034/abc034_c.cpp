#include <bits/stdc++.h>
#define rep(i, n) for(long long i = 0; i < n; i++)
using namespace std;

const long long mod = 1000000007;
long long calc(long long a, long long b, long long p)
{
	if (b == 0) return 1;
	if (b % 2 == 0)
	{
		long long d = calc(a, b / 2, p);
		return (d * d) % p;
	}
	else
		return (a * calc(a, b - 1, p)) % p;
}
long long nCr(long long n, long long r) {
  long long dividend = 1;
  long long divisor  = 1;
  for (long long i = 1; i <= r; ++i ) {
    dividend *= (n-i+1);
	dividend %= mod;
    divisor  *= i;
	divisor %= mod;
  }
  return dividend * calc(divisor, mod - 2, mod) % mod;
}
signed main(void)
{
	long long h, w;
	cin >> w >> h;
	cout << nCr(h + w  - 2, min(w - 1, h - 1)) << endl;
	return 0;
}
