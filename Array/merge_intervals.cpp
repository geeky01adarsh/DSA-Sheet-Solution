#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge_intervals(vector<vector<int>> intervals){
    vector<vector<int>> ans;
    sort(intervals.begin(), intervals.end());
    int start=intervals[0][0];
    int end=intervals[0][1];
    for(int i=1; i<intervals.size(); i++){
        if(intervals[i][0]<=end)
            end = max(end,intervals[i][1]);
        else{
            ans.push_back({start,end});
            start=intervals[i][0]; 
            end=intervals[i][1];
        }
    }
    ans.push_back({start,end});
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> v;
    // cout<<0;
    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    vector<vector<int>> ans = merge_intervals(v);
    // for(int i=0; i<n; i++){
    //     cout<<v[i][0]<<" "<<v[i][1]<<endl;
    // }
    for(int i=0; i<ans.size(); i++){
        cout<<"["<<ans[i][0]<<" , "<<ans[i][1]<<"] ";
    }
    cout<<endl;
    return 0;
}