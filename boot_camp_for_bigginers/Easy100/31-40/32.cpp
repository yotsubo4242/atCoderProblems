#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	int	n;
	cin >> n;
	string s;
	cin >> s;

	int	x = 0;
	int	max = 0;
	rep(i, 0, n) {
		if (s[i] == 'I')
			x++;
		else if (s[i] == 'D')
			x--;
		if (max < x)
			max = x;
	}
	cout << max << endl;

	return (0);
}
