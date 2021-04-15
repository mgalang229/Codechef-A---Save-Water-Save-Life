#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int h, x, y, c;
		cin >> h >> x >> y >> c;
		// check if the product of 'h' and the sum of 'x' and 'y' divided by 2
		// is less than or equal to 'c'
		cout << (h * (x + y / 2) <= c ? "YES" : "NO") << '\n';
	}
	return 0;
}
