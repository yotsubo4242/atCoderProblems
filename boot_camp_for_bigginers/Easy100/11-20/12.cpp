#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	int	k, n;
	cin >> k >> n;
	vector<int> a(n);
	rep(i, 0, n) cin >> a[i];
	int	max_distance = 0;
	int	distance;
	rep(i, 0, n) {
		if (i < n - 1)
			distance = a[i + 1] - a[i];
		else
			distance = k - a[i] + a[0];
		if (distance > max_distance)
			max_distance = distance;
	}
	cout << k - max_distance << endl;

	return (0);
}
