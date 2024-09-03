#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int	n;
	cin >> n;
	vector<int> d(n);
	rep(i, 0, n) cin >> d[i];

	sort(d.begin(), d.end());
	set<int> s(d.begin(), d.end());
	int	i = 0;
	int	count = 0;
	while (1)
	{
		count += s.count(d[i]);
		if (count == n / 2)
		{
			cout << d[i + 1] - d[i] << endl;
			return (0);
		}
		if (count > n / 2)
		{
			cout << "0" << endl;
			return (0);
		}
		i++;
	}


	return (0);
}
