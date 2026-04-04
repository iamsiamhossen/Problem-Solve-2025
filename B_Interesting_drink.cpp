/**
 * Author: iamsiamhossen
 * Created: 20-08-2025 22:05:22
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
    vector<int> a(n);
    for (auto &u : a)
        cin >> u;
    int q;
    cin >> q;
    vector<int> b(q), c;
    for (auto &u : b)
        cin >> u;
    c = b;
    sort(all(a));
    sort(all(b));

    map<int, int> mp;
    int i = 0, j = 0;
    while (j < q)
    {
        if (i < n and a[i] <= b[j])
        {
            while (i < n and a[i] <= b[j])
            {
                i++;
            }
            if (i == n - 1 and n == 1)
            {
                mp[b[j]] = i + 1;
            }
            else
            {
                mp[b[j]] = i;
            }
            if (j < q)
            {
                i--;
            }
        }
       
        else
        {
            mp[b[j]] = 0;
        }
        j++;
    }
    for (auto u : c)
    {
        cout << mp[u] << endl;
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