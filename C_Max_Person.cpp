/**
 * Author: iamsiamhossen
 * Created: 26-11-2025 19:52:05
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
    int n, m;
    cin >> n >> m;
    if (n == m)
    {
        int ans = n / 2;
        cout << ans << endl;
        return;
    }
    int x = 0, ans = 0;
    for (int i = 1; i <= 1000000; i++)
    {
        x = n * pow(2, i);
        if (x <= m)
        {
            ans += n;
            m -= x;
        }
        else
        {
            ans += m / pow(2, i);
            break;
        }
        // cout << x << " " << m << endl;
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