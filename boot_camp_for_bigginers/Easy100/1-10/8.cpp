#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int	a, b;
	cin >> a >> b;
	string as = to_string(a);
	string bs = to_string(b);
	string nums = as + bs;
	int	num = stoi(nums);

	int	i = 1;
	while (i <= num / i)
	{
		if ((num / i == i) && (num % i == 0))
		{
			cout << "Yes" << endl;
			return (0);
		}
		i++;
	}
	cout << "No" << endl;
	return (0);
}
