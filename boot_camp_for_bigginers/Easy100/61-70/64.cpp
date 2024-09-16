#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	string o, e;
	cin >> o >> e;

	int	i = 0;
	while (i <= (int)o.size() * 2 || i <= (int)e.size() * 2) {
		if (!(i % 2) && i / 2 < (int)o.size())
			cout << o[i / 2];
		else if (i % 2 && i / 2 < (int)e.size())
			cout << e[i / 2];
		i++;
	}
	cout << endl;

	return (0);
}
