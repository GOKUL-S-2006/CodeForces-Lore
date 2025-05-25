#include <iostream>
#include <vector>

using namespace std;

vector<bool> sieveOfEratosthenes(int n) {
    vector<bool> isPrime(n + 1, true);  // Initialize all as true
    isPrime[0] = false;
    isPrime[1] = false;

    for (int i = 2; i * i <= n; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }

    return isPrime;
}

int main() {
    int n;
    cout << "Enter upper limit to find primes: ";
    cin >> n;

    vector<bool> primes = sieveOfEratosthenes(n);

    cout << "Primes up to " << n << " are:\n";
    for (int i = 2; i <= n; ++i) {
        if (primes[i])
            cout << i << " ";
    }
    cout << "\n";

    return 0;
}
