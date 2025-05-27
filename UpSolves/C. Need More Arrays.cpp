#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define INF(t) numeric_limits<t>::max()

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n;
		int prev = INT_MIN;
		int ans = 0;
		for(int i = 0; i < n; i++) {
			int x; cin >> x;
			if(prev + 1 < x) {
				ans++;
				prev = x;
			}
		}
		cout << ans << "\n";
	}

	return 0;
}
