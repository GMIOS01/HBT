#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    unsigned short n, x;
    cin >> n >> x;

    vector< short > a(n);
    for (unsigned short i = 0; i < n; i++) {
        cin >> a[i];
    }

    short count = 0;
    for (unsigned short i = 0; i < n; i++) {
        for (unsigned short j = i + 1; j < n; j++) {
            if (a[i] + a[j] == x) 
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
