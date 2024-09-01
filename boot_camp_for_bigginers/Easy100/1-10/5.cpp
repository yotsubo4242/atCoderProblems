#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int	n, m, c;
	cin >> n >> m >> c;
	vector<int> b(m);
	rep(i, 0, m) cin >> b[i];
	vector<vector<int>> a(n, vector<int>(m));
	rep(i, 0, n) {
		rep(j, 0, m) {
			cin >> a[i][j];
		}
	}
	int	count = 0;
	int	sum;

	rep(i, 0, n) {
		sum = 0;
		rep(j, 0, m) {
			sum += a[i][j] * b[j];
		}
		sum += c;
		if (sum > 0)
			count++;
	}
	cout << count << endl;

	return (0);
}
