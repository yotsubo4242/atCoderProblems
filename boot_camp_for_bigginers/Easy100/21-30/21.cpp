#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	int	x;
	cin >> x;
	int	i;
	bool flag = false;
	
	while (1) {
		flag = false;
		i = 2;
		while (i <= x / i)
		{
			if (!(x % i))
			{
				flag = true;
				break ;
			}
			i++;
		}
		if (!flag)
			break ;
		x++;
	}
	cout << x << endl;

	return (0);
}
