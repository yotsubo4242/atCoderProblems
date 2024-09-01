#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int	A, B;
	cin >> A >> B;
	int ans = 0;

	ans = (B - 1) / (A - 1);
	if ((B - 1) % (A - 1) != 0) {
		ans++;
	}
	cout << ans << endl;

	return (0);
}
