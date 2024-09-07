#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	int	a, b;
	cin >> a >> b;
	string s;
	cin >> s;

	rep(i, 0, a + b + 1) {
		if (i == a) {
			if (s[i] != '-') {
				cout << "No" << endl;
				return (0);
			}
		} else if (!(s[i] >= '0' && s[i] <= '9')) {
			cout << "No" << endl;
			return (0);
		}
	}
	cout << "Yes" << endl;

	return (0);
}
