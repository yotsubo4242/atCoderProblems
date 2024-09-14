#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	int	n, t, a;
	cin >> n >> t >> a;
	vector<float> tmpa(n);
	rep(i, 0, n) {
		int	tmp;
		cin >> tmp;
		tmpa[i] = t - tmp * 0.006;
	}

	float min = FLT_MAX;
	int	min_index;
	rep(i, 0, n) {
		if (min > abs(a - tmpa[i])) {
			min = abs(a - tmpa[i]);
			min_index = i + 1;
		}
	}
	cout << min_index << endl;

	return (0);
}
