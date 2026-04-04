/**
 * Author: iamsiamhossen
 * Created: 14-08-2025 15:18:09
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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &u : a)
        cin >> u;
    int mx = *max_element(all(a));
    int t = mx - k;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == t)
        {
            cnt++;
        }
        else if ((t >= a[i] - k and t <= a[i] + k))
        {
            cnt++;
        }
    }
    cout << cnt << endl;
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