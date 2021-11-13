#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a, b, c;
		cin >> a >> b >> c;
		// In simpler words, if (a1 + a3 − 2 * a2) is divisible by 3 the 
		// answer is 0, otherwise it is 1.
		cout << ((a + c - 2 * b) % 3 == 0 ? 0 : 1) << '\n';
	}
	return 0;
}
