#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	int	n;
	cin >> n;
	map<string, int> cnt;
	rep(i, 0, n) {
		string s;
		cin >> s;
		cnt[s]++;
	}

	int	max = 0;
	for (const auto& [s, i]: cnt) {
		if (max < i)
			max = i;
	}
	for (const auto& [s, i]: cnt) {
		if (i == max)
			cout << s << endl;
	}

	return (0);
}
