#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	int	n, m;
	cin >> n >> m;
	vector<int> l(m);
	vector<int> r(m);
	rep(i, 0, m) cin >> l[i] >> r[i];
	int	left = INT_MIN;
	int	right = INT_MAX;

	rep(i, 0, m) {
		if (left < l[i])
			left = l[i];
		if (right > r[i])
			right = r[i];
	}
	if (right - left < 0)
		cout << "0" << endl;
	else
		cout << right - left + 1 << endl;

	return (0);
}
