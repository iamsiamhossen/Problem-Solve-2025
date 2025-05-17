/**
 * Author: iamsiamhossen
 * Created: 12-05-2025 15:16:12
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
void solve()
{
    // 1600 and 2999
    // 1200 and 2399
    int x, y;
    cin >> x >> y;
    if (y == 1)
    {
        if (x >= 1600 and x <= 2999)
          cout << "Yes" << endl;
        else
             cout << "No" << endl;
    }
    else
    {
        if (x >= 1200 and x <= 2399)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
int32_t main()
{
    fastread();
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case " << t << ": ";
        solve();
    }
    return 0;
}