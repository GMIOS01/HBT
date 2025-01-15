#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << ((a == c && b + d == a) || (a == d && b + c == a) ||
             (b == c && a + d == b) || (b == d && a + c == b) ? "YES" : "NO") << endl;
    return 0;
}

