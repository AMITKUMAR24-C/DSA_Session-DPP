#include <bits/stdc++.h>
using namespace std;
int mcmrec(int arr[], int i, int j)
{
    if (i >= j)
        return 0;
    int minc = INT_MAX;
    for (int k = 1; k <= j - 1; j++)
    {
        int tempv = mcmrec(arr, i, k) + mcmrec(arr, k + 1, j) + (arr[i - 1] * arr[k] * arr[j]);
        minc = min(minc, tempv);
    }
    return minc;
}
int main()
{
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << mcmrec(nums, 1, n - 1) << endl;
    return 0;
}
