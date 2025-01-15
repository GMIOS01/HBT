#include <iostream>
using namespace std;

int main() {
    int a, b, c, x, y, z;
    cin >> a >> b >> c >> x >> y >> z;

    if (c < z || (c == z && (b < y || (b == y && a < x)))) {
        cout << 1 << endl; 
    } else if (c > z || (c == z && (b > y || (b == y && a > x)))) {
        cout << 2 << endl; 
    } else {
        cout << 0 << endl;
    }

    return 0;
}

