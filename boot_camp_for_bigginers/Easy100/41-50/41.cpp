#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	int	n;
	cin >> n;
	vector<int> p(n);
	rep(i, 0, n) cin >> p[i];

	int	ans = 0;
	int	min_num = INT_MAX;
	rep(i, 0, n) {
		min_num = min(min_num, p[i]);
		if (min_num == p[i]) ans++;
	}
	cout << ans << endl;

	return (0);
}
