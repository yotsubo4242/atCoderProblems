#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	ll	s;
	cin >> s;

	ll	a = s;
	ll	m = 2;
	set<ll> tmp;
	tmp.insert(s);
	while (1)
	{
		if (a % 2 == 0)
			a = a / 2;
		else if (a % 2 == 1)
			a = 3 * a + 1;
		if (tmp.count(a))
		{
			cout << m << endl;
			return (0);
		}
		tmp.insert(a);
		m++;
	}

	return (0);
}
