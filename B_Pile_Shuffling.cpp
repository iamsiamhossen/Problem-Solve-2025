/**
 * Author: iamsiamhossen
 * Created: 21-07-2025 00:46:36
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
    int n;
    cin >> n;
    int need = 0, rem = 0, ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (b > d)
        {
            ans += b - d;
            ans += a;
            if (a > c)
            {
                rem += (a - c);
            }
            else
            {
                need += (c - a);
            }
        }
        else
        {
            if (c > a)
            {
                need += (c - a);
            }
        }
    }
    //  cout << ans << " " << need << " " << rem << endl;
    need -= rem;
    cout << ans + need << endl;
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