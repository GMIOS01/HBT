#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int A[n];
    int B[n];

    for (int i = 0; i < n; i++) 
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++) 
    {
        cin >> B[i];
    }

    sort(A, A + n);
    sort(B, B + n);

    cout << (equal(A, A + n, B) ? "YES" : "NO") << endl;

    return 0;
}
