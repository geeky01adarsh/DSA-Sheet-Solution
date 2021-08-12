#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int> nums) {
        // Find the intersection point of the two runners.
        int slow = nums[0];
        int fast = nums[0];

        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } 
        while (slow != fast);

        // Find the "entrance" to the cycle.
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return fast;
    }
};

int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0; i<n+1; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }

    Solution ob;
    cout<<ob.findDuplicate(v)<<endl;

}