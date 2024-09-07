#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	int	n;
	cin >> n;
	vector<ll> a(n);
	rep(i, 0, n) cin >> a[i];

	bool is_all_even = true;
	int	count = 0;
	while (1)
	{
		rep(i, 0, n) {
			if (a[i] % 2)
				is_all_even = false;
			else
				a[i] = a[i] / 2;
		}
		if (!is_all_even)	
			break ;
		count++;
	}
	cout << count << endl;

	return (0);
}
