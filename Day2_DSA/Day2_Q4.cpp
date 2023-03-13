#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string t;
    cin >> s >> t;
    map<char, int> ss;
    map<char, int> tt;
    for (int i = 0; i < s.size(); i++)
    {
        ss[s[i]] = i + 1;
    }
    for (int i = 0; i < s.size(); i++)
    {
        tt[t[i]] = i + 1;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (ss[s[i]] != tt[t[i]])
        {
            cout << "No, its not" << endl;
        }
    }
    cout << "yes, this is Isomorphic String" << endl;
    return 0;
}
