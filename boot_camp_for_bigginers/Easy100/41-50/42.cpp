#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	int	n, m;
	cin >> n >> m;
	vector<int> k(n);
	vector<int> food(m, 0);
	vector<vector<int>> a(n, vector<int>(1));
	rep(i, 0, n) {
		cin >> k[i];
		a[i].resize(k[i]);
		rep(j, 0, k[i]) cin >> a[i][j];
	}

	rep(i, 0, n) {
		rep(j, 0, k[i]) {
			food[a[i][j] - 1]++;
		}
	}

	int count = 0;
	rep(i, 0, m) {
		if (food[i] == n)
			count++;
	}

	cout << count << endl;
	return (0);
}
