#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	int	A, B, M;
	cin >> A >> B >> M;
	vector<int> a(A);
	rep(i, 0, A) cin >> a[i];
	vector<int> b(B);
	rep(i, 0, B) cin >> b[i];
	vector<tuple<int, int, int>> c(M);
	rep(i, 0, M) cin >> get<0>(c[i]) >> get<1>(c[i]) >> get<2>(c[i]);

	int	min = INT_MAX;
	rep(i, 0, M) {
		int tmp = a[get<0>(c[i]) - 1] + b[get<1>(c[i]) - 1] - get<2>(c[i]);
		if (tmp < min)
			min = tmp;
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	if (a[0] + b[0] < min)
		min = a[0] + b[0];
	cout << min << endl;

	return (0);
}
