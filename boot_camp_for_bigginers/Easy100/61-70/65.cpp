#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	string s;
	cin >> s;

	int	to_a = 0;
	while (s[to_a]) {
		if (s[to_a] == 'A')
			break ;
		to_a++;
	}
	int	to_z = s.size() - 1;
	while (s[to_z]) {
		if (s[to_z] == 'Z')
			break ;
		to_z--;
	}
	cout << to_z - to_a + 1 << endl;

	return (0);
}
