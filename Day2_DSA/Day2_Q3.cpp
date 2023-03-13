#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int n = str.size();
    string key2[] = {
        "2", "22", "222",
        "3", "33", "333",
        "4", "44", "444",
        "5", "55", "555",
        "6", "66", "666",
        "7", "77", "777", "7777",
        "8", "88", "888",
        "9", "99", "999", "9999"};
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (str[i] == ' ')
        {
            ans += "0";
        }
        else
        {
            int pos = str[i] - 'A';
            ans += key2[pos];
        }
    }
    cout << ans << endl;
    return 0;
}
