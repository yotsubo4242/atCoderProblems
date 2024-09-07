#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	ll n, a, b;
	cin >> n >> a >> b;

	ll ans = 0;
	ll repeat = n / (a + b);
	ans += repeat * a;
	n -= repeat * (a + b);
	if (n < a)
		ans += n;
	else
		ans += a;
	cout << ans << endl;

	return (0);
}
