#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	ll	a, b, c, k;
	cin >> a >> b >> c >> k;

	ll	ans;
	ans = a - b;
	if (k % 2)
		ans *= -1;
	if (ABS(ans) > 1e18)
		cout << "Unfair" << endl;
	else
		cout << ans << endl;
	return (0);
}
