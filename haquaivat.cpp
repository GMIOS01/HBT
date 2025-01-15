#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    if (n == 1) {
        cout << a[0] << endl;
        return 0;
    }

    vector<long long> dp(n);
    dp[0] = a[0];
    dp[1] = min(a[0] + a[1], 2 * a[0]);

    for (int i = 2; i < n; ++i) {
        dp[i] = min(dp[i - 1] + a[i], dp[i - 2] + 2 * a[i - 1]);
    }

    cout << dp[n - 1] << endl;
    return 0;
}

