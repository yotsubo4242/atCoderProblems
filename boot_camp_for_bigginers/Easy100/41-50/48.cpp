#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	int	n;
	cin >> n;
	vector<ll> h(n);
	rep(i, 0, n) cin >> h[i];

	int	max = 0;
	int	count = 0;
	int	now;
	rep(i, 0, n - 1) {
		now = h[i];
		if (now >= h[i + 1])
			count++;
		else
			count = 0;
		if (max < count)
			max = count;
	}
	cout << max << endl;

	return (0);
}
