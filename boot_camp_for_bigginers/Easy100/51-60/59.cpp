#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	string s;
	cin >> s;

	if (s[0] != 'A') {
		cout << "WA" << endl;
		return (0);
	}
	int	in_C = 0;
	rep(i, 1, s.size()) {
		if (i >= 2 && i <= (int)s.size() - 2) {
			if (s[i] == 'C')
				in_C++;
			else if (!(s[i] >= 'a' && s[i] <= 'z')) {
				cout << "WA" << endl;
				return (0);
			}
		} else if (!(s[i] >= 'a' && s[i] <= 'z')) {
			cout << "WA" << endl;
			return (0);
		}
	}
	if (in_C == 1)
		cout << "AC" << endl;
	else
		cout << "WA" << endl;

	return (0);
}
