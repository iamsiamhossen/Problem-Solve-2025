/**
 * Author: iamsiamhossen
 * Created: 09-08-2025 17:52:31
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
    int x, k;
    cin >> x >> k;
    int ans = INT_MIN;
    for (int i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            if (x / k >= i)
            {
                ans = max(ans, i);
            }
            int og = x / i;
            if (x / k >= og)
            {
                ans = max(ans, og);
            }
        }
    }
    cout << ans << endl;
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