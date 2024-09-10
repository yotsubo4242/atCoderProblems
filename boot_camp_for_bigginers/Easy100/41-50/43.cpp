#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	string s;
	cin >> s;
	vector<int> n('z' - 'a' + 1, 0);

	for(char c: s)
		n[c - 'a']++;

	rep(i, 0, 'z' - 'a' + 1) {
		if (n[i] % 2)
		{
			cout << "No" << endl;
			return (0);
		}
	}
	cout << "Yes" << endl;

	return (0);
}
