#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	int	x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	int	x3, y3, x4, y4;
	x4 = x1 + y1 - y2;
	y4 = y1 + x2 - x1;
	x3 = x2 + y1 - y2;
	y3 = y2 + x2 - x1;
	cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;

	return (0);
}
