// Move all negative numbers to beginning and positive to end 
// with constant extra space

#include <iostream>
#include <vector>
using namespace std;

void rearrange(int arr[], int n){
    // use two array
    // one to store positive values
    // another to store negative values
    vector<int> p,m;
    for(int i=0; i<n; i++){
        if(arr[i]>=0) p.push_back(arr[i]);
        else m.push_back(arr[i]);
    }
    // make changes to given array
    // fill it with negative elements first
    // now fill positive elements in remaining positions
    for(int i=0; i<m.size(); i++)
    arr[i]=m[i];
    for(int i=m.size(); i<n; i++){
        arr[i]=p[i-m.size()];
    }
}

void printArray(int arr[],int n){
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<"\n";
}

int main()
{
    int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    printArray(arr, n);
    return 0;
}