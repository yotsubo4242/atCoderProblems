#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int	a, b, c;
	cin >> a >> b >> c;
	if (a % 2 || b % 2 || c % 2)
	{
		cout << "0" << endl;
		return (0);
	}
	if (a == b && b == c)
	{
		cout << "-1" << endl;
		return (0);
	}
	int	tmp_a, tmp_b, tmp_c;
	int	count = 0;
	while (!(a % 2) && !(b % 2) && !(c % 2))
	{
		tmp_a = a;
		tmp_b = b;
		tmp_c = c;
		a = tmp_b / 2 + tmp_c / 2;
		b = tmp_a / 2 + tmp_c / 2;
		c = tmp_a / 2 + tmp_b / 2;
		count++;
	}
	cout << count << endl;

	return (0);
}
