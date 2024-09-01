#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int N;
	cin >> N;
	vector<int> X(N);
	rep(i, 0, N) {
		cin >> X[i];
	}
	sort(X.begin(), X.end());
	int	min = INT_MAX;
	rep(i, X[0], X[N - 1] + 1) {
		int sum = 0;
		rep(j, 0, N) {
			sum += (X[j] - i) * (X[j] - i);
		}
		if (sum < min)
			min = sum;
	}
	cout << min << endl;

	return (0);
}
