#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double r, pi = 3.14, chuVi, dienTich;
    cin >> r;

    chuVi = 2 * pi * r;
    dienTich = pi * r * r;

    cout << fixed << setprecision(3);
    cout << chuVi << endl;
    cout << dienTich << endl;

    return 0;
}
