#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	int	n, d, x;
	cin >> n >> d >> x;
	vector<int> a(n);
	rep(i, 0, n) cin >> a[i];

	int	count = 0;
	rep(i, 0, n) {
		int	day = 1;
		while (day <= d)
		{
			day += a[i];
			count++;
		}
	}
	cout << count + x << endl;

	return (0);
}
