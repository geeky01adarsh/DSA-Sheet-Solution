// Given an array of size N containing only 0s, 1s, and 2s; 
// sort the array in ascending order.


#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // maintain three pointers of 0, 1, 2 and
        // count thier occurences in the array
        // modify the array with 0,1,2 acc to their count

        int zeroes=0,ones=0,twos=0;
        for(int i=0; i<n; i++){
            if(a[i]==0) zeroes++;
            else if(a[i]==1) ones++;
            else twos++;
        }
        for(int i=0; i<zeroes; i++) a[i]=0;
        for(int i=zeroes; i<(zeroes+ones); i++) a[i]=1;
        for(int i=(zeroes+ones); i<n; i++) a[i]=2;
    }
    
};

// { Driver Code Starts.
int main() {

    int twos;
    cin >> twos;

    while(twos--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends
