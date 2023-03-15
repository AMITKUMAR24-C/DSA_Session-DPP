/*Palindromic Partitioning*/

#include <bits/stdc++.h>
using namespace std;
/* To check the Palindrome*/
bool checkpalindrome(string str, int i, int j)
{
    while (j > i)
    {
        if (str[i] != str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
/* For Partitioning the string into palindrome form*/
int palpart(string str, int i, int j)
{
    if (i >= j || checkpalindrome(str, i, j))
        return 0;
    int ans = INT_MAX;
    int count = 0;
    for (int k = i; k < j; k++)
    {
        count = palpart(str, i, k) + palpart(str, k + 1, j);
        ans = min(ans, count);
    }
    return ans + 1;
}
/* Using DP - Memoization*/
int palpartdp(string str, int i, int j)
{
    int n = str.size();
    int dp[n][n];
    memset(dp, -1, sizeof(dp));
    if (dp[i][j] != -1)
        return dp[i][j];
    if (i >= j || checkpalindrome(str, i, j))
        return 0;
    int ans = INT_MAX;
    int count = 0;
    for (int k = i; k < j; k++)
    {
        count = palpartdp(str, i, k) + palpartdp(str, k + 1, j);
        ans = min(ans, count);
    }
    return dp[i][j] = ans + 1;
}
/* Driven code*/
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    cout << palpartdp(s, 0, n - 1) << endl;
    return 0;
}
