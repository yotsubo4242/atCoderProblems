#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	string s, t;
	cin >> s >> t;
	bool flag = false;

	rep(i, 0, (int)s.size()) {
		rep(j, 0, (int)s.size()) {
			char c;
			if (i + j > s.size() - 1)
				c = s[i + j - s.size()];
			else
				c = s[i + j];
			// cout << "c: " << c << " t[j]: " << t[j] << endl;
			if (t[j] != c) {
				// cout << "koo" << endl;
				flag = false;
				break ;
			} else
				flag = true;
		}
		cout << endl;
		if (flag) {
			cout << "Yes" << endl;
			return (0);
		}
	}
	cout << "No" << endl;
	return (0);
}
