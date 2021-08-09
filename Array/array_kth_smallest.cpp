//  Your task is to complete the function kthSmallest() which takes the array, it's size and an integer k as input and returns the kth smallest element.
 //Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function


    // brute force method
    int kthsmallest(int arr[], int l, int r, int k) {
        //code here
        sort(arr,arr+r+1);
        return arr[k-1];
    }

    int kthSmallest(int arr[], int l, int r, int k){
        priority_queue<int> p;
        for(int i=0; i<=r; i++){
            p.push(arr[i]);
        }
        for(int i=r; i>=0; i--){
            // cout<<p.top()<<" ";
            if(i==k-1) return p.top();
            p.pop();
        }
        return 1;
    }
    
};

// { Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends