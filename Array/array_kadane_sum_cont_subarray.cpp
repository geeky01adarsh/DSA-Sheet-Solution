// Given an array arr of N integers. Find the contiguous sub-array with maximum sum.

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        int sum =0; 
        int sumG = INT_MIN;
        for(int i=0; i<n; i++){
            // find the maximum of sum of prev element or the current element and store it
            sum = max(arr[i],sum+arr[i]); 
            // now storing the maximum of prev max and the current max
            sumG= max(sumG,sum);
            
        }
        return sumG;
    }
    
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends