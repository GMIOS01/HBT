#include <iostream>
#include <vector>

using namespace std;

void sortArray(vector<int>& A) {
    vector<int> positive;
    vector<int> negative;

    for {
        if (int num >= 0) {
            positive.push_back(num);
        } else {
            negative.push_back(num);
        }
    }

    int index = 0;
    for (int num : positive) {
        A[index++] = num;
    }
    for (int num : negative) {
        A[index++] = num;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    sortArray(A);

    cout << "Mang sau khi xep lai: ";
    for (int num : A) {
        cout << num << " ";
    }
    cout << endl;

    return 
