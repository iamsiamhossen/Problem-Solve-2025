/**
 * Author: iamsiamhossen
 * Created: 11-09-2025 20:06:29
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
    int n;
    cin >> n;
    int ans1 = INT_MAX;

    int ans2 = INT_MAX;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int x = (a + b) / 2;
        int y = c / 2;
        int tmp = INT_MIN;
        int tmp2 = INT_MIN;
        if (x > a)
        {
            if (c == tmp2)
            {
                ans1 = min(ans1, a);
                tmp2 = c;
            }
            else if ((c > tmp2))
            {
                ans1 = a;
                tmp2 = c;
            }
        }
        else
        {
            // if (y >= tmp)
            // {
            // tmp = y;
            //     ans2 = min(ans2, x);
            // }
            if (y == tmp)
            {
                ans2 = min(ans2, x);
                tmp = y;
            }
            else if ((y > tmp))
            {
                ans2 = x;
                tmp = y;
            }
        }
    }
    if (ans1 != INT_MAX)
        cout << ans1;
    else
        cout << ans2;
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