#include <bits/stdc++.h>

using namespace std;

void inputArray(unsigned short a[], unsigned int length);
void xoayMang(unsigned short a[], unsigned int length, unsigned int k);
void ouputArray(unsigned short a[], unsigned int length);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned int n,k;
    cin >> n >> k;
    unsigned short a[n];
    inputArray(a, n);
    xoayMang(a, n, k);
    ouputArray(a, n);
    return 0;
}

void inputArray(unsigned short a[], unsigned int length){
	for (unsigned int i = 0; i < length; i++){
		cin >> a[i];
	}
}

void ouputArray(unsigned short a[], unsigned int length){
    for (unsigned int i = 0; i < length; i++){
		cout << a[i] << " ";
	}
}

void xoayMang(unsigned short a[], unsigned int length, unsigned int k){
    for (unsigned int i = 0; i < k; i++){
        unsigned short temp = a[0];
        for (unsigned int j = 0; j < length; j++){
            a[j] = a[j + 1];
        }
        a[length - 1] = temp;
    }
}
