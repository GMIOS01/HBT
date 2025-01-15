#include <iostream>

using namespace std;

int main() {
    int a, b, c, max, min;
    cin >> a >> b >> c;

    max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }

    cout << max << endl;
    cout << min << endl;

    return 0;
} 
