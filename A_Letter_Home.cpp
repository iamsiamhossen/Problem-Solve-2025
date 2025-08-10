/**
 * Author: iamsiamhossen
 * Created: 17-06-2025 21:06:13
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
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int minval = *min_element(a.begin(), a.end());
    int maxval = *max_element(a.begin(), a.end());
    int mind = abs(s - minval);
    int maxd = abs(s - maxval);
    // cout << mind << maxd << endl;
    int ans = 0;
    // if (s > maxval)
    // {
    //     cout << maxval << endl;
    //     return;
    // }
    // if (s < minval)
    // {
    //     cout << maxval - s << endl;
    //     return;
    // }
    ans += maxval - minval;
    ans += min(mind, maxd);
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