#include<iostream>
#include<string.h>
using namespace std;
int PalinArray(int a[], int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		cout<<PalinArray(a,n)<<endl;
	}
}// } Driver Code Ends


/*Complete the function below*/
bool isPlandromic(int x){
    string s = to_string(x);
    int i=0, n = s.size()-1; 
    while(i<n){
        if(s[i++]!=s[n--])
        return 0;
    }
    return 1;
}

int PalinArray(int a[], int n)
{  //add code here.
    // bool flag = 0;
    for(int i=0; i<n; i++){
        if(!isPlandromic(a[i])) return 0;
    }
    return 1;
}