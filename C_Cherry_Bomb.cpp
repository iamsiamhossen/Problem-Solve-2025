/**
 * Author: iamsiamhossen
 * Created: 26-05-2025 19:42:34
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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    set<int> seen;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0 and b[i] >= 0)
        {
            seen.insert(a[i] + b[i]);
        }
    }

    if (seen.size() > 1)
    {
        cout << 0 << endl;
        return;
    }
    else if (seen.size() == 1)
    {
        int sum = *seen.begin();
        for (int i = 0; i < n; i++)
        {
            if ((sum - a[i]) < 0 || (sum - a[i]) > k)
            {
                cout << 0 << endl;
                return;
            }
        }
        cout << 1 << endl;
    }
    else
    {
        int mx = *max_element(a.begin(), a.end());
        int mn = *min_element(a.begin(), a.end());
        int ans = k - mx + 1;
        int t = (k + mn);
        cout << ans + (t - k) << endl;
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