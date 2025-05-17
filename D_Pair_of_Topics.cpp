/**
 * Author: iamsiamhossen
 * Created: 08-05-2025 15:20:58
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
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    vector<int> c(n);
    // simplify the formula
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i] - b[i];
    }
    sort(c.begin(), c.end());
    int l = 0, r = n - 1;
    int t = 0;
    while (l < r)
    {
        int ans = c[l] + c[r];
        if (ans > 0)
        {
            t += r - l;
            r--;
        }
        else
        {
            l++;
        }
    }
    cout << t << endl;
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