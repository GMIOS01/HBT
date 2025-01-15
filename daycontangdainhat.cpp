#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int daycontangdaimax(vector<int>& a) {
    int n = a.size();
    vector<int> dp(n, 1);

    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (a[i] > a[j] && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
            }
        }
    }

    return *max_element(dp.begin(), dp.end());
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cout << daycontangdaimax(a) << endl;

    return 0;
}
