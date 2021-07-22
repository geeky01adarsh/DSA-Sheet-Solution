// Given an array arr[] denoting heights of N towers and a positive integer K,
// you have to modify the height of each tower either by increasing or decreasing them by K only once.
//  After modifying, height should be a non-negative integer.
// Find out what could be the possible minimum difference of the height of shortest and
// longest towers after you have modified each tower.

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    int getMinDiff(int arr[], int n, int k)
    {
        // sort the  array first
        // increase the value of each member by k
        // assign the ans by max_ele-least_ele
        // modify the max min element respectively 
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            arr[i] += k;
        }
        int mini = arr[0];
        int maxi = arr[n - 1];
        int ans = maxi - mini;

        for (int i = n - 1; i >= 0; --i)
        {
            arr[i] -= (2 * k);
            if (arr[i] < 0)
            {
                break;
            }
            if (i > 0)
                maxi = max(arr[n - 1], arr[i - 1]);
            else
                maxi = arr[n - 1];
            mini = min(arr[0], arr[i]);
            ans = min(ans, (maxi - mini));
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
} // } Driver Code Ends