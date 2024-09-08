#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	int	n, k, q;
	cin >> n >> k >> q;
	vector<int> a(q);
	rep(i, 0, q) cin >> a[i];
	vector<int> score(n, k);

	rep(i, 0, q)
		score[a[i] - 1]++;

	rep(i, 0, n) {
		if (score[i] - q <= 0)
			cout << "No" << endl;
		else
			cout << "Yes" << endl;
	}

	return (0);
}
