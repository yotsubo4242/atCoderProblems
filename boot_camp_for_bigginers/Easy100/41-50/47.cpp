#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	int	n;
	cin >> n;
	ll ans;

	if (n == 1) {
		cout << "1" << endl;
		return (0);
	}
	ll li_1 = 1;
	ll li_2 = 2;
	rep(i, 2, n + 1) {
		if (i != 2) {
			li_2 = li_1;
			li_1 = ans;
		}
		ans = li_1 + li_2;
	}
	cout << ans << endl;

	return (0);
}
