#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int	n;
	cin >> n;
	int divided = n / 1.08;
	int ans = divided * 1.08;
	if (ans == n) {
		cout << divided << endl;
	} else if ((int)((divided + 1) * 1.08) == n) {
		cout << divided + 1 << endl;
	} else if ((int)((divided - 1) * 1.08) == n) {
		cout << divided - 1 << endl;
	} else {
		cout << ":(" << endl;
	}
	

	return (0);
}
