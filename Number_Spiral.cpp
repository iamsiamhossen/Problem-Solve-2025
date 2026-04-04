/**
 * Author: iamsiamhossen
 * Created: 07-11-2025 13:33:29
 **/
#include <bits/stdc++.h>
using namespace std;
// fastread
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
// Shortcut
#define endl "\n"
#define int long long
#define float double
#define all(X) (X).begin(), (X).end()
#define Reverse(X) reverse(All(X))
#define Unique(X) (X).erase(unique((X).begin(), (X).end()), (X).end())
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"
// MOD
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define INF 1001001001
// int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};
void solve()
{
    int row, col;
    cin >> row >> col;
    int ans = 0;
    if (row <= col)
    {
        if (col & 1)
        {
            ans = (col * col) - (row - 1);
        }
        else
        {
            col--;
            ans = (col * col) + row;
        }
        cout << ans << endl;
    }
    else
    {
        if (!(row & 1))
        {
            ans = (row * row) - (col - 1);
        }
        else
        {
            row--;
            ans = (row * row) + col;
        }
        cout << ans << endl;
    }
}
int32_t main()
{
    fastread();
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case " << t << ": ";
        solve();
    }
    return 0;
}