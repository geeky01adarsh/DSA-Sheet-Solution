#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long merge(long long arr[], long long low, long long mid, long long high)
    {
        long long n1 = mid - low + 1;
        long long n2 = high - mid;
        
        long long right[n1], left[n2];
        
        for(long long i = 0; i < n1; i++)
        {
            left[i] = arr[low + i];
        }
        
        for(long long i = 0; i < n2; i++)
        {
            right[i] = arr[mid + i + 1];
        }
        
        long long i = 0, j = 0, k = low;
        long long res = 0;
        
        while(i < n1 && j < n2)
        {
            if(left[i] <= right[j])
            {
                arr[k++] = left[i++];
            }
            else
            {
                arr[k++] = right[j++];
                res += (n1 - i);
            }
        }
        
        while(i < n1)
        {
            arr[k++] = left[i++];
        }
        
        while(j < n2)
        {
            arr[k++] = right[j++];
        }
        
        return res;
    }
    
    long long mergeSort(long long arr[], long long low, long long high)
    {
        long long res = 0;
        
        if(low < high)
        {
            long long mid = low + (high - low)/2;
            
            res += mergeSort(arr, low, mid);
            res += mergeSort(arr, mid + 1, high);
            
            res += merge(arr, low, mid, high);
        }
        
        return res;
    }
    
    public:
    long long inversionCount(long long arr[], long long N)
    {
        return mergeSort(arr, 0, N - 1);
    }

    

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends