#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void inhoanvi(int n) {
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        a[i] = n - i;
    }

    do {
        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
    } while (prev_permutation(a.begin(), a.end()));
}

int main() {
    int n;
    cin >> n;
    inhoanvi(n);

    return 0;
}
