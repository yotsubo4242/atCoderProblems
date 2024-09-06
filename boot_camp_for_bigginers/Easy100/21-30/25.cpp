#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int	kaijo(int n)
{
	int	res = 1;
	while (n)
	{
		res *= n;
		n--;
	}
	return (res);
}

int main() {
	int	N;
	cin >> N;
	vector<int> P(N);
	rep(i, 0, N) cin >> P[i];
	vector<int> Q(N);
	rep(i, 0, N) cin >> Q[i];

	vector<int> v(N);
	rep(i, 0, N) v[i] = i + 1;

	int	idx = 0;
	int	a, b;
	do {
		bool ok = true;
		rep(i, 0, N) {
			if (v[i] != P[i])
				ok = false;
		}
		if (ok) a = idx;

		ok = true;
		rep(i, 0, N) {
			if (v[i] != Q[i])
				ok = false;
		}
		if (ok) b = idx;
		idx++;
	} while (next_permutation(v.begin(), v.end()));

	cout << ABS(a - b) << endl;
	return (0);
}
