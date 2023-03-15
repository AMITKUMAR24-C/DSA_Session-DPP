/*0/1 knapsack*/
#include <bits/stdc++.h>
using namespace std;
/* Recursion - Code*/
int knapsack(int wt[], int val[], int w, int n)
{
    if (n == 0 || w == 0)
        return 0;
    if (wt[n - 1] > w)
        return knapsack(wt, val, w, n - 1);
    else
        return max(val[n - 1] + knapsack(wt, val, w - wt[n - 1], n - 1), knapsack(wt, val, w, n - 1));
}
/*Dp - Memoization*/
int knapsackdp(int wt[], int val[], int w, int n)
{
    int dp[n][n];
    memset(dp, -1, sizeof(dp));
    if (n == 0 || w == 0)
        return 0;
    if (dp[w][n] != -1)
        return dp[w][n];
    if (wt[n - 1] > w)
        return knapsack(wt, val, w, n - 1);
    else
        return dp[w][n] = max(val[n - 1] + knapsack(wt, val, w - wt[n - 1], n - 1), knapsack(wt, val, w, n - 1));
}
int main()
{
    int n;
    cin >> n;
    int wt[n];
    int val[n];
    for (int i = 0; i < n; i++)
    {
        cin >> wt[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    int w;
    cin >> w;
    cout << knapsack(wt, val, w, n) << endl;
    return 0;
}
