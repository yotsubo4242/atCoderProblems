#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	ll n, k;
	cin >> n >> k;
	if (!n)
		cout << "0" << endl;
	else if (n < k && k - n < n)
		cout << k - n << endl;
	else if (n < k && n < k - n)
		cout << n << endl;
	else if (n == k)
		cout << "0" << endl;
	else if (k == 1)
		cout << "0" << endl;
	else
	{
		if (n % k > ABS(n % k - k))
			cout << ABS(n % k - k) << endl;
		else
			cout << n % k << endl;
	}

	return (0);
}
