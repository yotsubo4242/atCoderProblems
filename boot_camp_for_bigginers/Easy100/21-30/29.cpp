#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	string s;
	cin >> s;

	int	min = INT_MAX;
	int	tmp;
	rep(i, 0, s.size() - 2) {
		tmp = (s[i] - '0') * 100 + (s[i + 1] - '0') * 10 + s[i + 2] - '0';
		if (min > ABS(753 - tmp))
			min = ABS(753 - tmp);
	}
	cout << min << endl;

	return (0);
}
