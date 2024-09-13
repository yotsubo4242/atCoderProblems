#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> a(m);
	vector<int> b(m);
	rep(i, 0, m) cin >> a[i] >> b[i];
	vector<int> c(n, 0);

	rep(i, 0, m) {
		c[a[i] - 1]++;
		c[b[i] - 1]++;
	}
	rep(i, 0, n) cout << c[i] << endl;

	return (0);
}
