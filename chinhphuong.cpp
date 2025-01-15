#include <iostream>
#include <cmath>

using namespace std;

string is_square_number(int a) {
    if (a < 0)
        return "NO";
    int sqrt_a = static_cast<int>(sqrt(a));
    if (sqrt_a * sqrt_a == a)
        return "YES";
    else
        return "NO";
}

int main() {
    int a;
    cin >> a;
    cout << is_square_number(a) << endl;
    return 0;
}

