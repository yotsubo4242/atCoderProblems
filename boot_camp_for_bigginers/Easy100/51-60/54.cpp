#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	int n;
	cin >> n;
	vector<string> s(n);
	rep(i, 0, n) cin >> s[i];

	string now;
	rep(i, 1, n) {
		now = s[i];
		if (s[i - 1][s[i - 1].size() - 1] != now[0]) {
			cout << "No" << endl;
			return (0);
		}
		rep(j, 0, i) {
			if (now == s[j]) {
				cout << "No" << endl;
				return (0);
			}
		}
	}
	cout << "Yes" << endl;

	return (0);
}
