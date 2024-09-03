#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	int	n;
	cin >> n;
	vector<pair<int, int>> a(n);
	rep(i, 1,  n + 1) {
		cin >> a[i - 1].first;
		a[i - 1].second = i;
	}
	sort(a.begin(), a.end());
	rep(i, 0, n) cout << a[i].second << " ";
	cout << endl;

	return (0);
}
