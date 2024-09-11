#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	int	h, w;
	cin >> h >> w;
	vector<vector<char>> a(h, vector<char>(w));
	rep(i, 0, h) {
		rep(j, 0, w) cin >> a[i][j];
	}

	rep(i, 0, w + 2) cout << "#";
	cout << endl;
	rep(i, 0, h) {
		cout << "#";
		rep(j, 0, w) cout << a[i][j];
		cout << "#" << endl;
	}
	rep(i, 0, w + 2) cout << "#";
	cout << endl;

	return (0);
}
