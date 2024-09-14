#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	int	a, b, k;
	cin >> a >> b >> k;

	rep(i, 0, k) {
		if (i > b - a)
			break;
		cout << a + i << endl;
	}
	for (int i = k - 1; i >= 0; i--) {
		if (b - i < a + k)
			continue ;
		cout << b - i << endl;
	}
	return (0);
}
