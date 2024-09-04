#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	int	n, x;
	cin >> n >> x;
	vector<int> a(n);
	rep(i, 0, n) cin >> a[i];

	sort(a.begin(), a.end());
	int	sum = 0;
	int	i = 0;
	while (sum < x && i < n)
	{
		sum += a[i];
		i++;
	}
	if (sum != x)
		cout << i - 1 << endl;
	else
		cout << i << endl;

	return (0);
}
