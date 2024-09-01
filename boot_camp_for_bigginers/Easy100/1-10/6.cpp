#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	ll	h, w;
	cin >> h >> w;
	ll	ans;
	if (h == 1 || w == 1)
		ans = 1;
	else if (h * w % 2)
		ans = h * w / 2 + 1;
	else
		ans = h * w / 2;
	cout << ans << endl;

	return (0);
}
