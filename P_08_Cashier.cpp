/**
 * Author: iamsiamhossen
 * Created: 31-08-2025 23:37:49
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
    int n, l, a;
    cin >> n >> l >> a;
    int agethama = 0;
    int sum = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int t, y;
        cin >> t >> y;
        cnt += (abs(t - agethama)) / a;
        sum = t + y;
        agethama = sum;
    }
    // cout << sum << endl;
    if (n == 0)
    {
        cout << l / a << endl;
    }
    else
    {
        int x = l - sum;
        cnt += x / a;
        cout << cnt << endl;
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