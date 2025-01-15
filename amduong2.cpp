#include <iostream>
#include <vector>

using namespace std;

void sapXep(vector<int>& arr) {
    vector<int> duong, am;

    for (long unsigned int i = 0; i < arr.size(); i++) {
        if (arr[i] >= 0) {
            duong.push_back(arr[i]);
        } else {
            am.push_back(arr[i]);
        }
    }

    long unsigned int i = 0, j = 0, k = 0;

    while (i < duong.size() && j < am.size()) {
        arr[k++] = duong[i++];
        arr[k++] = am[j++];
    }

    while (i < duong.size()) {
        arr[k++] = duong[i++];
    }
    while (j < am.size()) {
        arr[k++] = am[j++];
    }
}

int main() {
    long unsigned int n;
    cin >> n;
    vector<int> arr(n);
    for (long unsigned int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sapXep(arr);

    for (long unsigned int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
