#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	int	n, a, b;
	cin >> n >> a >> b;

	string s;
	int	ans = 0;
	int	tmp;
	rep(i, 1, n + 1) {
		s = to_string(i);
		tmp = 0;
		for (char c: s)
			tmp += c - '0';
		if (tmp >= a && tmp <= b)
			ans += i;
	}
	cout << ans << endl;

	return (0);
}
