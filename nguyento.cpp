#include <iostream>
using namespace std;

bool isPrime(long n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    long n;
    cin >> n;
    if (isPrime(n)) {
        cout << "PRIME" ;
    } else {
        cout << "NOT PRIME" ;
    }
    return 0;
}
