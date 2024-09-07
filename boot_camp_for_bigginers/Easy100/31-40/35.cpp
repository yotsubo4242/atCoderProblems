#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	string s;
	cin >> s;
	vector<bool> flags('z' - 'a' + 1, false);

	for (char c: s)
		flags[c - 'a'] = true;

	int	i = 0;
	while (1) {
		if (!flags[i])
			break ;
		i++;
	}
	if (i <= 'z' - 'a')
		cout << (char)('a' + i) << endl;
	else
		cout << "None" << endl;

	return (0);
}
