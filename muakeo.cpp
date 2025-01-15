#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> p(n), h(n);

    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
    }

    vector<long long> dp(m + 1, 0);

    for (int i = 0; i < n; ++i) {
        for (int j = m; j >= p[i]; --j) {
            dp[j] = max(dp[j], dp[j - p[i]] + h[i]);
        }
    }

    cout << *max_element(dp.begin(), dp.end()) << endl;
    return 0;
}

