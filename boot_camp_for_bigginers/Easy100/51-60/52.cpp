#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	int	n;
	cin >> n;
	vector<int> b(n - 1);
	rep(i, 0, n - 1) cin >> b[i];

	int	ans = 0;
	ans += b[0];
	rep(i, 0, n - 2) {
		ans += min(b[i], b[i + 1]);
	}
	ans += b[n - 2];

	cout << ans << endl;
	return (0);
}
