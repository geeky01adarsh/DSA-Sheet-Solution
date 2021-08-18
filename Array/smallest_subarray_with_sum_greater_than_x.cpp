#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:

    int sb(int arr[], int n, int x)
    {
        int i, j=0, sum=0, ans=INT_MAX;
        for(i=0; i<n; i++){
            if(arr[i]>x) return 1;
            sum+=arr[i];
            if(sum>x)
                ans = min(i-j+1, ans);
            while(sum>=x){
                sum -= arr[j++];
                if(sum>x)
                ans = min(i-j+1, ans);
            }
        }
        return ans;
    }    
};

// { Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.sb(a,n,x)<<endl;
	}
	return 0;
}  // } Driver Code Ends