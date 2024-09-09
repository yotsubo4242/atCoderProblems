#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	int	n;
	cin >> n;
	vector<int> a(n);
	vector<int> b(n);
	rep(i, 0, n) {
		cin >> a[i];
		b[i] = a[i];
	}

	sort(b.rbegin(), b.rend());
	rep(i, 0, n) {
		if (a[i] != b[0])
			cout << b[0] << endl;
		else
			cout << b[1] << endl;
	}

	return (0);
}
