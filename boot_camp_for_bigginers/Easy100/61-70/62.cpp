#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	int	h, w;
	cin >> h >> w;
	vector<vector<char>> c(h + 1, vector<char>(w + 1));
	rep(i, 1, h + 1) {
		rep(j, 1, w + 1) {
			cin >> c[i][j];
		}
	}

	rep(i, 1, 2 * h + 1) {
		rep(j, 1, w + 1) {
			cout << c[(i + 1) / 2][j];
		}
		cout << endl;
	}

	return (0);
}
