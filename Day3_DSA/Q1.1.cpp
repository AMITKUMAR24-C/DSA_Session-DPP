#include <bits/stdc++.h>
using namespace std;
int josp(int n, int k)
{
    if (n < 2)
        return 1;
    return ((josp(n - 1, k) + k - 1) % n) + 1;
}
int main()
{
    int n, k;
    cin >> n, k;
    cout << josp(n, k) << endl;
    return 0;
}
