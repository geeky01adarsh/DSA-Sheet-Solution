#include <bits/stdc++.h>
using namespace std;

string Say(string s)
{
    int i = 0;
    char count = '0';
    char num = s[0];
    string str = "";

    while (i < s.length())
    {

        while (s[i] == num && i < s.length())
        {
            i++;
            count++;
        }

        str.push_back(count);
        str.push_back(num);

        num = s[i];
        count = '0';
    }
    return str;
}

string countAndSay(int n)
{

    if (n == 1)
        return "1";

    string term = countAndSay(n - 1);

    return Say(term);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout<<countAndSay(n)<<endl;
    }
    return 0;
}