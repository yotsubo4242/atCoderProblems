#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int N, A, B;
	cin >> N >> A >> B;
	string S;
	cin >> S;
	int passed = 0;
	int passed_oversea = 0;

	for (char c: S) {
		if (c == 'c')
			cout << "No" << endl;
		else if (c == 'a') {
			if (passed < A + B) {
				cout << "Yes" << endl;
				passed++;
			} else {
				cout << "No" << endl;
			}
		} else if (c == 'b') {
			if (passed < A + B && passed_oversea < B) {
				cout << "Yes" << endl;
				passed_oversea++;
				passed++;
			} else {
				cout << "No" << endl;
			}
		}
	}

	return (0);
}
