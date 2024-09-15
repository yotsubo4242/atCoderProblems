#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	int	n;
	cin >> n;
	vector<int> t(n);
	rep(i, 0, n) cin >> t[i];
	int m;
	cin >> m;
	vector<int> p(m);
	vector<int> x(m);
	rep(i, 0, m) cin >> p[i] >> x[i];

	rep(i, 0, m) {
		int	ans = 0;
		rep(j, 0, n) {
			if (p[i] - 1 == j)
				ans += x[i];
			else
				ans += t[j];
		}
		cout << ans << endl;
	}


	return (0);
}
