#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	string S;
	cin >> S;

	int	n = 0;
	int	w = 0;
	int	s = 0;
	int	e = 0;
	for (char c : S) {
		if (c == 'N') n++;
		if (c == 'W') w++;
		if (c == 'S') s++;
		if (c == 'E') e++;
	}
	if ((n && !s) || (!n && s))
		cout << "No" << endl;
	else if ((w && !e) || (!w && e))
		cout << "No" << endl;
	else
		cout << "Yes" << endl;

	return (0);
}
