/**
 * Author: iamsiamhossen
 * Created: 13-04-2025 21:52:35
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
    int n, m, l, r;
    cin >> n >> m >> l >> r;
    if (n == m)
        cout << l << " " << r << endl;
    else
    {
        int b = max(l, r);
        int x = n - m;
        int ans = b - x;
        if (ans >= 0)
        {
            cout << l << " " << ans << endl;
        }
        else
        {
            int t = x - r;
            r=0;
            l+=t;
            cout << l << " " << r << endl;
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