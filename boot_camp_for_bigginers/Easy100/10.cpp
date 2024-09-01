#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int	n;
	cin >> n;
	vector<int> a(n);
	rep(i, 0, n) cin >> a[i];
	int	alice = 0;
	int	bob = 0;

	sort(a.rbegin(), a.rend());
	rep (i, 0, n) {
		if (i % 2 == 0)
			alice += a[i];
		else if (i % 2)
			bob += a[i];
	}
	cout << alice - bob << endl;

	return (0);
}
