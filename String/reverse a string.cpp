#include <bits/stdc++.h>

using namespace std;

void reverse(vector<char> &v){
    int i=0, n = v.size()-1;
    while(i<n)
    swap(v[i++], v[n--]);
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<char> v;
        for (int i = 0; i < n; i++)
        {
            char ch;
            cin >> ch;
            v.push_back(ch);
        }
        reverse(v);
        for(auto i:v)
        cout<<i<<" ";
    }
    return 0;
}