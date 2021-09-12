#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0), cin.tie(0);
	int m, n, ans = 0;
	
	cin >> m >> n;
	
	if(n % 2 == 0) {
		ans += m * (n / 2);
	} else {
		ans += m * (n / 2);
		ans += m / 2;
	}
	
	cout << ans << "\n";
	return 0;
}
