#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int n = str.size();
    bool pal = 0;
    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - 1 - i])
        {
            pal = 1;
            break;
        }
    }
    if (pal)
    {
        cout << "Palindrome nahi hai" << endl;
    }
    else
    {
        cout << "Palindrome hai" << endl;
    }
    return 0;
}
