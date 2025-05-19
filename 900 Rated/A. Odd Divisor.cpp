#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;

        // Remove all factors of 2
        while(n % 2 == 0)
            n /= 2;

        // If anything is left, it's an odd factor > 1
        if(n > 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
