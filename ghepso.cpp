#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool chuoiso(const string& a, const string& b) {
    return a + b > b + a;
}

string daysotunhien(int n) {
    vector<string> dayso;
    for (int i = 1; i <= n; ++i) {
        dayso.push_back(to_string(i)); 
    }

    sort(dayso.begin(), dayso.end(), chuoiso); 

    string kq;
    for (const string& so : dayso) {
        kq += so; 
    }

    return kq; 
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << daysotunhien(n) << endl;

    return 0;
}

