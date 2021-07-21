// You are given a string s. You need to reverse the string.


// Algoritm :- Maintaion two pointers i=0 and n=s.size()-1
// now swap s[i] with s[n]
// loop the same process till i<n and perform i++ and n-- in each step





//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++





string reverseWord(string str){
    int i=0;
    int n = str.size()-1;
  while(i<n){
      char temp = str[n];
      str[n] = str[i];
      str[i]=temp;
      i++; n--; 
  }
  return str;
}
