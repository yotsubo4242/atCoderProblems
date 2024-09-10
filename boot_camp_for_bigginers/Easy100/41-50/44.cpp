#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	string s;
	cin >> s;

	size_t	i = 0;
	int	count = 0;
	while (s[i])
	{
		if (s[i] == s[i + 1])
		{
			if (s[i + 1] == '0')
				s[i + 1] = '1';
			else
				s[i + 1] = '0';
			count++;
		}
		i++;
	}
	cout << count << endl;

	return (0);
}
