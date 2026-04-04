/**
 * Author: iamsiamhossen
 * Created: 13-08-2025 23:35:13
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
    vector<int> a(n), b(m);
    for (auto &u : a)
        cin >> u;
    for (auto &u : b)
        cin >> u;
    vector<int> c;
    int i = 0, j = 0;
    while (i < n and j < m)
    {
        if (a[i] <= b[j] and i < n)
        {
            c.push_back(a[i]);
            i++;
        }
        else
        {
            c.push_back(b[j]);
            if (j < m)
                j++;
        }
    }
    while (i < n)
    {
        c.push_back(a[i]);
        i++;
    }
    while (j < m)
    {
        c.push_back(b[j]);
        j++;
    }

    for (auto u : c)
        cout << u << " ";
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