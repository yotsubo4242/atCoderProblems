#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

bool	is_ACGT(char c)
{
	if (c == 'A' || c == 'C' || c == 'G' || c == 'T')
		return (true);
	return (false);
}

int main() {
	string s;
	cin >> s;

	size_t	i = 0;
	size_t	j = 0;
	int	max = 0;
	int	count = 0;
	while (s[i]) {
		if (is_ACGT(s[i]))
		{
			count = 1;
			j = i + 1;
			while (s[j] && is_ACGT(s[j]))
			{
				j++;
				count++;
			}
			if (count > max)
				max = count;
		}
		i++;
	}
	cout << max << endl;

	return (0);
}
