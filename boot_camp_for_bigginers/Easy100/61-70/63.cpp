#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	int	n;
	cin >> n;
	vector<int> a(n);
	rep(i, 0, n) cin >> a[i];

	int	now = 1;
	int	count = 0;
	rep(i, 0, n) {
		if (a[i] == now)
			now++;
		else {
			count++;
		}
	}
	if (now == 1)
		cout << "-1" << endl;
	else
		cout << count << endl;

	return (0);
}
