#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	int	n, m, x;
	cin >> n >> m >> x;
	bool flag = false;
	vector<int> a(m + 1);
	rep(i, 0, m) {
		int	tmp;
		cin >> tmp;
		if (!flag && tmp > x)
		{
			flag = true;
			a[i] = 0;
			i++;
		}
		a[i] = tmp;
	}
	int	i = 0;
	flag = false;
	int	left = 0;
	int	right = 0;
	rep(i, 0, m + 1) {
		if (!flag && !a[i])
			flag = true;
		else if (!flag)
			left++;
		else
			right++;
	}
	if (left < right)
		cout << left << endl;
	else
		cout << right << endl;

	return (0);
}
