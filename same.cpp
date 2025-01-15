#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    int A[n],B[n];
    
    cin >> n;
    for(int i=0;i<n;i++)
    {
    	cin >> A[i];
	}
   
   	for(int i=0;i<n;i++)
    {
    	cin >> B[i];
	}
	
	int same = 0;
	if(A[n] == B[n] )
	{
		cout << "Yes" << endl;
	}
	else if (same = A[n] + B[n]) 
	{
		cout << "Yes" << endl;
	}
	else 
	{
		cout << "No" << endl;
	}
     
    return 0;
}
