#include <bits/stdc++.h>
using namespace std;

void next_permutation(vector<int> &arr){
    int n = arr.size();
    int idx=-1;
    for(int i=n-2; i>=0; i--){
        if(arr[i]<arr[i+1]){
            idx=i+1;
            break;
        }
    }
    if(idx==-1){
        reverse(arr.begin(),arr.end());
    }
    else{
        int prev=idx;
        for(int i=idx+1; i<n; i++){
            if(arr[idx-1]<arr[i] & arr[i]<=arr[prev])
            prev=i;
        }
        swap(arr[idx-1],arr[prev]);
        reverse(arr.begin()+idx, arr.end());
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    next_permutation(arr);
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
