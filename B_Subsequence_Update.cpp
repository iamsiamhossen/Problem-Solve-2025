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
    int sum = accumulate(a.begin(), a.end(), 0LL);
    vector<int> b;
    for (int i = l - 1; i <= m - 1; i++)
    {
        b.push_back(a[i]);
    }
    vector<int> c;
    for (int i = 0; i < n; i++)
    {
        if (i >= l - 1 and i <= m - 1){
            continue;
        }
        else{
            c.push_back(a[i]);
        }
    }
    sort(b.rbegin(), b.rend());
    sort(c.begin(), c.end());
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