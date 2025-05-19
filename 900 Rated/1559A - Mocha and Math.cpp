#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int ans;
        cin >> ans; // read the first element into ans

        for (int i = 1; i < n; i++) {
            int x;
            cin >> x;
            ans &= x; // AND with each subsequent element
        }

        cout << ans << endl;
    }

    return 0;
}
