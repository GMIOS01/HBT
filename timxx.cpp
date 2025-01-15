#include <bits/stdc++.h>

    using namespace std;

    void nhapMang(int a[], int n);
    int timSo(int a[], int n, int x);

    int i;

    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n,x;
        cin >> n >> x;
        int a[n];
        nhapMang(a,n);
        cout << timSo(a,n,x);
        return 0;
    }


    void nhapMang(int a[], int n){
        for(i = 0; i < n; i++){
            cin >> a[i];
        }
    }

    int timSo(int a[], int n, int x){
        int count = 0;
        for(i = 0; i < n; i++){
            if (a[i] == x){
                count++;
            }
        }
        return (count != 0) ? count : -1;
    }
