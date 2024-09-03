#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	int	n;
	cin >> n;
	vector<int> v(n);
	rep(i, 0, n) cin >> v[i];

	sort(v.begin(), v.end());
	double	material = v[0];
	rep(i, 1, n) {
		material = (material + v[i]) / 2;
	}
	cout << material << endl;
	return (0);
}
