// Given two arrays a[] and b[] of size n and n respectively. 
// The task is to find union between these two arrays.
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int ans =0;
        bool arr[100001]={0};
        for(int i=0; i<n; i++){
            arr[a[i]]=1;
        }
        for(int i=0; i<m; i++){
            arr[b[i]]=1;
        }
        for(int i=0; i<100001; i++){
            if(arr[i]) ans++;
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends