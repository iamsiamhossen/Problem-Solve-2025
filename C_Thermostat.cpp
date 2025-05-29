/**
 * Author: iamsiamhossen
 * Created: 29-05-2025 23:29:18
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
    int l, r, x, a, b;
    cin >> l >> r >> x >> a >> b;

    if (a == b)
    {
        cout << 0 << endl;
    }
    else if (abs(a - b) >= x)
    {
        cout << 1 << endl;
    }
    else if (a < b)
    {
        if (((b + x) <= r) or ((a - x) >= l))
        {
            cout << 2 << endl;
        }
        else if (((a + x) <= r) and ((b - l) >= x))
        {
            cout << 3 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else
    {
        if (((a + x) <= r) or ((b - x) >= l))
        {
            cout << 2 << endl;
        }
        else if (((a - x) >= l) and ((r - b) >= x))
        {
            cout << 3 << endl;
        }
        else
        {
            cout << -1 << endl;
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