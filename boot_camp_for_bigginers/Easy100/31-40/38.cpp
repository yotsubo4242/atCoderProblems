#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	vector<int> x(5);
	rep(i, 0, 5) cin >> x[i];
	vector<int> v(5);
	rep(i, 0, 5) v[i] = i;

	int	ans = INT_MAX;
	do {
		int	t = 0;
		rep(i, 0, 5) {
			if (t % 10 > 0)
				t = t - (t % 10) + 10;
			t += x[v[i]];
		}
		ans = min(ans, t);
	} while (next_permutation(v.begin(), v.end()));
	cout << ans << endl;

	return (0);
}
