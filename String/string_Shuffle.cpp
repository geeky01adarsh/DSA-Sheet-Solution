#include <bits/stdc++.h>
using namespace std;

bool isShuffle(string s1, string s2, string res){
    if(res.size()!=(s1.size()+s2.size())) return 0;
    sort(res.begin(),res.end());
    string temp = s1+s2;
    sort(temp.begin(), temp.end());
    if(temp==res) return 1;
    return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1, s2, res;
        cin>>s1>>s2;
        cin>>res;
        cout<<isShuffle(s1,s2,res)<<endl;
    }
    return 0;
}