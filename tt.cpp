/**
 * Author: iamsiamhossen
 * Created: 21-07-2025 13:02:55
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
    int n, l, m;
    cin >> n >> l >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> b;
    for (int i = l - 1; i <= m - 1; i++)
    {
        b.push_back(a[i]);
    }
    int sum = accumulate(b.begin(), b.end(), 0LL);
    // cout << sum << endl;
    sort(b.rbegin(), b.rend());
    vector<int> lf, rh;
    for (int i = 0; i < l - 1; i++)
    {
        lf.push_back(a[i]);
    }
    for (int i = m; i < n; i++)
    {
        rh.push_back(a[i]);
    }
    sort(lf.begin(), lf.end());
    sort(rh.begin(), rh.end());
    int ans1 = sum, ans2 = sum;
    int idx = 0;
    if (!lf.empty())
    {
        for (int i = 0; i < lf.size(); i++)
        {
            if (i < b.size() and b[i] > lf[i])
            {
                ans1 -= b[i];
                ans1 += lf[i];
            }
        }
    }
    if (!rh.empty())
    {
        for (int i = 0; i < rh.size(); i++)
        {
            if (i < b.size() and b[i] > rh[i])
            {
                ans2 -= b[i];
                ans2 += rh[i];
            }
        }
    }
    cout << min(ans1, ans2) << endl;
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