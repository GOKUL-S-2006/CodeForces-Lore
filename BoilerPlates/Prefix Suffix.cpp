#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr = {2, 4, 6, 8, 10};
    int n = arr.size();

    vector<int> prefix(n, 0);
    vector<int> suffix(n, 0);

    // Compute prefix sum
    prefix[0] = arr[0];
    for (int i = 1; i < n; ++i) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    // Compute suffix sum
    suffix[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        suffix[i] = suffix[i + 1] + arr[i];
    }

    
}
