#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	ll	n;
	cin >> n;
	ll	attack = 0LL;
	ll	mons_num = 1;
	ll	life = (ll)n;

	bool end = false;
	while (1)
	{
		attack += mons_num;
		if (life == 1)
			break ;
		life /= 2;
		mons_num *= 2;
	}
	cout << attack << endl;

	return (0);
}
