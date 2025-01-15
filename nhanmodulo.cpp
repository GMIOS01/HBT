#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    
    int nhan =  a * b % c;
    
    cout << nhan << endl;
    
    return 0;
}
