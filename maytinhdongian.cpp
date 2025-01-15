#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a, b;
    char phepTinh;

    cin >> a >> phepTinh >> b;

    switch (phepTinh) {
        case '+':
            cout << fixed << setprecision(3) << a + b << endl;
            break;
        case '-':
            cout << fixed << setprecision(3) << a - b << endl;
            break;
        case '*':
            cout << fixed << setprecision(3) << a * b << endl;
            break;
        case '/':
            if (b == 0) {
                cout << "Khong the chia cho 0" << endl;
            } else {
                cout << fixed << setprecision(3) << a / b << endl;
            }
            break;
        default:
            cout << "Phep tinh khong hop le" << endl;
    }

    return 0;
} 
