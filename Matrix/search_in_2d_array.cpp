#include <bits/stdc++.h>

using namespace std;

bool search(vector<vector<int>> matrix, int target)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        if (target >= matrix[i][0] && target <= matrix[i][matrix[i].size() - 1])
            for (int j = 0; j < matrix[i].size(); j++)
                if (matrix[i][j] == target)
                    return 1;
    }
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {   
        int n, m, target;
        cin >> n >>m>>target;
        vector<vector<int>> v;
        for (int i = 0; i < n; i++)
        {
            vector<int> temp;
            for (int j = 0; j < m; j++)
            {
                int tp;
                cin >> tp;
                // v[i].push_back(temp);
                temp.push_back(tp);
            }
            v.push_back(temp);
        }
        cout << search(v, target) << endl;
    }
    return 0;
}