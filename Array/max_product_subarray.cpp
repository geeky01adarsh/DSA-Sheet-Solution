#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    // code here
	    long long ans=1;
	    if(n==1) return arr[0];
	    long long int maxi=1, mini= 1;
	    for(int i=0; i<n; i++){
	        long long int x = arr[i];
	        if(x<0) swap(maxi,mini);
	        maxi = max(x, maxi*x);
	        mini = min(x, mini*x);
	        ans = max(maxi,ans);
	    }
	    return ans;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends