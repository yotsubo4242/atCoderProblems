#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	int	a, b;
	cin >> a >> b;

	int count = 0;
	rep(i, a, b + 1) {
		string tmp;
		string tmp2;
		tmp = to_string(i);
		tmp2 = to_string(i);
		reverse(tmp.begin(), tmp.end());
		if (tmp == tmp2)
			count++;
	}
	cout << count << endl;
	return (0);
}
