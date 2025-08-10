/**
 * Author: iamsiamhossen
 * Created: 07-08-2025 21:01:47
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
    int cnt = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == -1)
        {
            cnt++;
        }
    }
    if (cnt == n)
    {
        YES;
        return;
    }
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            NO;
            return;
        }
        else
        {
            if (a[i] != -1)
            {
                b.push_back(a[i]);
            }
        }
    }
    int mx = *max_element(all(b));
    int mn = *min_element(all(b));
    if (mx - mn == mn - 1 or mx - mn == 0)
        YES;
    else
        NO;
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