#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(mat[i][j], mat[j][i]);
        }
    }
    int k;
    for (int i = 0; i < n; i++)
    {
        k = n - 1;
        for (int j = 0; j < k; j++)
        {
            swap(mat[j][i], mat[k][i]);
            k--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
             cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
