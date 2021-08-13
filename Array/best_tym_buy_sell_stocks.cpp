#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int best_tym(vector<int> v){
        int min_till_now=INT_MAX, max_till_now=-1, profit=0;
        // cout<<1<<endl;
        for(int i=0; i<v.size(); i++){
            if(v[i]<min_till_now){
                min_till_now=v[i];
                max_till_now=v[i];
            }
            if(v[i]>max_till_now){
                max_till_now=v[i];
            }
            profit=max(profit, max_till_now-min_till_now);
        }
        return profit;
    }
};

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    Solution obj;
    cout<<obj.best_tym(v)<<endl;


}