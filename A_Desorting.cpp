/**
 * Author: iamsiamhossen
 * Created: 19-08-2025 23:28:41
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
    vector<int> a(n), b;
    for (auto &u : a)
        cin >> u;
    b = a;
    int ans = INT_MAX;
    sort(all(b));
    if (b != a)
    {
        cout << 0 << endl;
        return;
    }
    for (int i = 1; i < n; i++)
    {
        ans = min((a[i] - a[i - 1]), ans);
    }
    // cout << ans << endl;
    cout << (ans / 2) + 1 << endl;
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