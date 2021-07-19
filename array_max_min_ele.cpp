// Write a function to return minimum and maximum in an array.
// Your program should make the minimum number of comparisons.

// This problem could be solved by various methods

#include <bits/stdc++.h>
using namespace std;

// brute force (not recommended for interviews)
pair<int, int> maxmin(int arr[], int n)
{
    sort(arr, arr + n);
    pair<int, int> ans = make_pair(arr[0], arr[n - 1]);
    return ans;
}

// linear search method
pair<int, int> maxmin1(int arr[], int n)
{
    pair<int, int> p = {INT_MIN, INT_MAX};
    for (int i = 0; i < n; i++)
    {
        p.first = max(arr[i], p.first);
        p.second = min(arr[i], p.second);
    }
    return p;
}


// find detailed explanation of other two methods from here
// https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/


int main()
{
    int arr[] = {1000, 11, 445,
                 1, 330, 3000};
    int arr_size = 6;

    pair<int, int> p = maxmin1(arr, arr_size);

    cout << "Minimum element is "
         << p.first << endl;
    cout << "\nMaximum element is "
         << p.second;

    return 0;
}
