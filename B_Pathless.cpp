/**
 * Author: iamsiamhossen
 * Created: 12-08-2025 15:25:31
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
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }
    int sum = accumulate(all(a), 0ll);
    if (s < sum or s == sum + 1)
    {
        for (int i = 1; i <= m[0]; i++)
            cout << 0 << " ";
        for (int i = 1; i <= m[2]; i++)
            cout << 2 << " ";
        for (int i = 1; i <= m[1]; i++)
            cout << 1 << " ";
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
    }
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