#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	int	a, b, c;
	cin >> a >> b >> c;
	int x;
	cin >> x;

	int	ans = 0;

	rep(i, 0, a + 1) {
		rep(j, 0, b + 1) {
			rep(k, 0, c + 1) {
				if (x == 500 * i + 100 * j + k * 50)
					ans++;
			}
		}
	}
	cout << ans << endl;

	return (0);
}
