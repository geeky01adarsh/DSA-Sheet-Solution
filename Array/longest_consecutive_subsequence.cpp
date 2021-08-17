#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
      //Your code here
      bool a[100001]={0};
      for(int i=0; i<n; i++)
      a[arr[i]]=1;
      int curr_max=0, maxi=0;
      for(int i=0; i<100001; i++){
          if(a[i]){
              while(a[i]){
                  curr_max++;
                //   cout<<i<<" ";
                  i++;
              }
          }
          maxi=max(curr_max, maxi);
          curr_max=0;
      }
      return maxi;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends