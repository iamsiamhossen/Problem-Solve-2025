/**
 * Author: iamsiamhossen
 * Created: 25-08-2025 09:59:47
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
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n);
    for (auto &u : a)
        cin >> u;
    for (auto &u : b)
        cin >> u;

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x = (a[i] * b[i]);
        if (mp[b[i]] < x)
        {
            mp[b[i]] = x;
        }
    }
    int sum = n, ans = 0;
    for (auto it : mp)
    {
        // cout << it.first << " " << it.second << endl;
        sum -= it.second / it.first;
        if (sum >= 1)
        {
            ans += it.second;
        }
        else
        {
            sum += it.second / it.first;
            break;
        }
    }
    // cout << ans << endl;
    cout << ans + (sum * m) << endl;
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