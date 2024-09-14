#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	int	a, b;
	cin >> a >> b;

	int	i = 1;
	while (1) {
		if (a == (int)(i * 0.08) && b == (int)(i * 0.1))
			break ;
		if (b < (int)(i * 0.1)) {
			i = -1;
			break ;
		}
		i++;
	}
	cout << i << endl;

	return (0);
}
