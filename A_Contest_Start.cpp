/**
 * Author: iamsiamhossen
 * Created: 20-05-2025 01:12:32
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
    int n, x, t;
    cin >> n >> x >> t;
    if (x > t)
    {
        cout << 0 << endl;
        return;
    }
    else if (x == t)
    {
        cout << n - 1 << endl;
        return;
    }
    else
    {
        int a = t / x;
        if (a >= n)
        {
            int ans = n * (n - 1) / 2;
            cout << ans << endl;
        }
        else
        {
            int tmp = n - a;
            int tmp2 = n - tmp - 1;
            int ans = tmp * a;
            ans += (tmp2 * (tmp2 + 1)) / 2;
            cout << ans << endl;
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