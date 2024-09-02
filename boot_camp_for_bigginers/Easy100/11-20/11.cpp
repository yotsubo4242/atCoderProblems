#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int	n;
	cin >> n;
	int	max_count = 0;
	int	max = 1;
	int	count;
	rep (i, 1, n + 1) {
		int	tmp = i;
		count = 0;
		while (tmp && !(tmp % 2))
		{
			tmp /= 2;
			count++;
		}
		if (count > max_count)
		{
			max_count = count;
			max = i;
		}
	}
	cout << max << endl;
	return (0);
}
