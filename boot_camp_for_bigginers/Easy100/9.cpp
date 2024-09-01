#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	int	n, k;
	cin >> n >> k;
	vector<int> x(n);
	rep(i, 0, n) cin >> x[i];
	int	sum = 0;
	int	min_num;

	rep(i, 0, n) {
		min_num = min(x[i], ABS(x[i] - k));
		sum += min_num * 2;
	}
	cout << sum << endl;

	return (0);
}
