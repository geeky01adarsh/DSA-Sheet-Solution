#include <bits/stdc++.h>
using namespace std;

vector<int> common_elements(vector<vector<int>> arr)
{
    vector<int> ans;
    unordered_map<int, int> mp;
    for (int i = 0; i < arr[0].size(); i++)
    {
        mp[arr[0][i]] = 1;
    }
    for (int i = 1; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            // If element is present in the map and
            // is not duplicated in current row.
            if (mp[arr[i][j]] == i)
            {
                // we increment count of the element
                // in map by 1
                mp[arr[i][j]] = i + 1;

                // If this is last row
                if (i == arr.size() - 1 && mp[arr[i][j]] == arr.size())
                    //   cout << arr[i][j] << " ";
                    ans.push_back(arr[i][j]);
            }
        }
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        vector<vector<int>> arr;
        for (int i = 0; i < m; i++)
        {
            vector<int> v;
            for (int j = 0; j < n; j++)
            {
                int temp;
                cin >> temp;
                v.push_back(temp);
            }
            arr.push_back(v);
        }
        vector<int> v = common_elements(arr);
        for (auto i : v)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}