
// Given an array of N integers arr[] where each element represents the max number of steps that can be made forward from that element.
// Find the minimum number of jumps to reach the end of the array (starting from the first element).
//  If an element is 0, then you cannot move through that element.
// Note: Return -1 if you can't reach the end of the array.

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution
{
public:
    int minJumps(int arr[], int n)
    {
        // Your code here
        int jumps = 0, currend = 0, currfar = 0;
        for (int i = 0; i < n - 1; i++)
        {
            currfar = max(currfar, i + arr[i]);
            if (i == currend)
            {
                jumps++;
                currend = currfar;
            }
            if (currend >= n - 1)
                break;
        }
        if (currend < n - 1)
            return -1;
        return jumps;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        cout << obj.minJumps(arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends