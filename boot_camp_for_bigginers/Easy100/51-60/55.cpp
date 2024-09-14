#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

bool	is_integer(double x) {
	return (floor(x)==x);
}

int	my_pow(int a, int b) {
	int	ans = 1;

	rep(i, 0, b) ans *= a;
	return (ans);
}

int main() {
	int	n, d;
	cin >> n >> d;
	vector<vector<int>> x(n, vector<int>(d));
	rep(i, 0, n) {
		rep(j, 0, d) cin >> x[i][j];
	}

	int	ans = 0;
	int	tmp;
	rep(i, 1, n) {
		rep(j, 0, i) {
			tmp = 0;
			rep(k, 0, d)
				tmp += my_pow(x[i][k] - x[j][k], 2);
			if (is_integer(sqrt(tmp)))
				ans++;
		}
	}
	cout << ans << endl;
	return (0);
}
