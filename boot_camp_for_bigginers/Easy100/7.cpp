#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

bool	judge(vector<vector<int>> a)
{
	rep(i, 0, 3) {
		if (!a[i][0] && !a[i][1] && !a[i][2])
			return (true);
	}
	rep(i, 0, 3) {
		if (!a[0][i] && !a[1][i] && !a[2][i])
			return (true);
	}
	if (!a[0][0] && !a[1][1] && !a[2][2])
		return (true);
	if (!a[0][2] && !a[1][1] && !a[2][0])
		return (true);
	return (false);
}

int main() {
	vector<vector<int>> a(3, vector<int>(3));
	rep(i, 0, 3) {
		rep(j, 0, 3) {
			cin >> a[i][j];
		}
	}
	int	n;
	cin >> n;
	vector<int> b(n);
	rep(i, 0, n) cin >> b[i];

	rep(i, 0, n) {
		rep(j, 0, 3) {
			rep(k, 0, 3) {
				if (a[j][k] == b[i])
					a[j][k] = 0;
			}
		}
	}
	if (judge(a))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return (0);
}
