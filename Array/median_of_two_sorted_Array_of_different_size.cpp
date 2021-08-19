#include <bits/stdc++.h>
using namespace std;

double median(vector<int> nums1, vector<int> nums2)
{
    vector<int> arr(nums1.size()+nums2.size());
    merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), arr.begin());
    for(auto i:arr) cout<<i<<" ";
    cout<<endl;
    if(arr.size()%2)
        return (double)arr[(arr.size()-1)/2];
    else
        return (double)(arr[(arr.size()/2)]+arr[(arr.size()/2)-1])/2;
}

double d_median(vector<int> nums1, vector<int> nums2)
{
    vector<int> arr;
    // int n = nums1.size()+nums2.size();
    int n1 = nums1.size(), n2 = nums2.size();
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (nums1[i] < nums2[j])
            arr.push_back(nums1[i++]);
        else
            arr.push_back(nums2[j++]);
    }
    for(auto i:arr) cout<<i<<" ";
    while (i < n1)
        arr.push_back(nums1[i++]);
    while (i < n2)
        arr.push_back(nums2[j++]);
    if ((n1 + n2) % 2)
        return (double)arr[(n1 + n2 - 1) / 2];
    else
        return (double)(arr[(n1 + n2) / 2] + arr[((n1 + n2) / 2) - 1]) / 2;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> nums1, nums2;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            nums1.push_back(temp);
        }
        for (int i = 0; i < m; i++)
        {
            int temp;
            cin >> temp;
            nums1.push_back(temp);
        }
        cout << d_median(nums1, nums2) << endl;
    }
}