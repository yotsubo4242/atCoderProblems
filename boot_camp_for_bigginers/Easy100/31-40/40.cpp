#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	ll a, b;
	cin >> a >> b;

	int	flag = 1;
	for (ll i = a; i <= b; i++) {
		if (i < 0)
			flag *= -1;
		else if (i == 0)
			flag *= 0;
		else
			flag *= 1;
	}

	if (flag > 0)
		cout << "Positive" << endl;
	else if (flag < 0)
		cout << "Negative" << endl;
	else
		cout << "Zero" << endl;

	return (0);
}
