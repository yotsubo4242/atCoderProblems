#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	string a, b;
	cin >> a >> b;

	if (a.size() > b.size()) {
		cout << "GREATER" << endl;
		return (0);
	} else if (a.size() < b.size()) {
		cout << "LESS" << endl;
		return (0);
	}
	int	i = 0;
	while (i < a.size()) {
		if (a[i] > b[i]) {
			cout << "GREATER" << endl;
			return (0);
		} else if (a[i] < b[i]) {
			cout << "LESS" << endl;
			return (0);
		}
		i++;
	}
	cout << "EQUAL" << endl;

	return (0);
}
