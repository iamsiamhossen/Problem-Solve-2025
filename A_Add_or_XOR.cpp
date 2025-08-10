/**
 * Author: iamsiamhossen
 * Created: 10-07-2025 03:24:20
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
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    if (a == b)
    {
        cout << 0 << endl;
        return;
    }
   else if (a > b)
    {
        if ((a & 1) and (a - b) == 1)
        {
            cout << y << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else
    {
        if (x <= y and a < b)
        {
            cout << (b - a) * x << endl;
        }
        else if (x > y)
        {
            if (a < b)
            {
                int ans = 0;
                for (int i = a; i < b; i++)
                {
                    if (i & 1)
                    {
                        ans += x;
                    }
                    else
                    {
                        ans += y;
                    }
                }
                cout << ans << endl;
            }
        }
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