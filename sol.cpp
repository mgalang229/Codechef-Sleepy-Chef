#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;
		long long ans = 0;
		int nap = 0;
		// count the length of substring that contains 0s
		// and everytime the loop encounters 1 or at the last index, divide the nap
		// by k in order to find how many naps were taken during this break
		for (int i = 0; i < n; i++) {
			nap += (s[i] == '0');
			if (s[i] != '0' || i == n - 1) {
				ans += (nap / k);
				nap = 0;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
