#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ABS(a) ((a) > 0 ? (a) : -(a))

int main() {
	string s;
	cin >> s;
	vector<char> x(0);

	for(char c : s) {
		for (int i = 0; i < x.size(); i++) {
			if (x[i] == c) {
				cout << "no" << endl;
				return (0);
			}
		}
		x.push_back(c);
	}
	cout << "yes" << endl;

	return (0);
}
