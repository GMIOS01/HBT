#include <iostream>
using namespace std;

void ptbacnhat(float a, float b) {
    if (a == 0) {
        cout << (b == 0 ? "Phuong trinh vo so nghiem" : "Phuong trinh vo nghiem") << endl;
    } else {
        cout << -b / a << endl;
    }
}

int main() {
    float a, b, c, d;
    cin >> a >> b;
    ptbacnhat(a, b);
    cin >> c >> d;
    ptbacnhat(c, d);
    return 0;
}

