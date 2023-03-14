#include <bits/stdc++.h>
using namespace std;
int medianoftwoarrays(vector<int> &nums1, vector<int> &nums2)
{
    int n1 = nums1.size();
    int n2 = nums2.size();
    int n = n1 + n2;
    vector<int> num(n);
    merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), num.begin());
    int ans = 0;
    if (n % 2 == 0)
        ans = (num[n / 2 - 1] + num[(n / 2)]) / 2;
    else
        ans = num[(n - 1) / 2];
    return ans;
}
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> num1;
    vector<int> num2;
    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        num1.push_back(x);
    }
    for (int i = 0; i < n2; i++)
    {
        int x;
        cin >> x;
        num2.push_back(x);
    }
    cout << medianoftwoarrays(num1, num2) << endl;
    return 0;
}
