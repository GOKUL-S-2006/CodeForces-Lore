#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define INF(t) numeric_limits<t>::max()

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int tc; cin >> tc;
	while(tc--) {
		string s; cin >> s;
		int n = stoi(s);
		if(int(sqrt(n))*int(sqrt(n)) == n) {
			cout << "0 " << int(sqrt(n)) << "\n";
		}
		else cout << "-1\n";
	}

	return 0;
}
