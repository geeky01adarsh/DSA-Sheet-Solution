#include <bits/stdc++.h>
using namespace std;

bool isRotation(string str1, string str2)
{
     if (str1.size() != str2.size())
        return 0;
    queue<char> q1;
    for (int i = 0; i < str1.size(); i++) {
        q1.push(str1[i]);
    }
    queue<char> q2;
    for (int i = 0; i < str2.size(); i++) {
        q2.push(str2[i]);
    }
    int k = str2.size();
    while (k--) {
        char ch = q2.front();
        q2.pop();
        q2.push(ch);
        if (q2 == q1)
            return true;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str1, str2;
        cin >> str1 >> str2;
        cout<<isRotation(str1, str2)<<endl;
    }
    return 0;
}