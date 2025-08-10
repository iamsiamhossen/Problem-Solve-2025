/**
 * Author: iamsiamhossen
 * Created: 06-07-2025 21:25:35
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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (a[0] == 0 or a[1] == 0)
    {
        cout << a[0] << endl;
    }
    else
    {
        if (is_sorted(all(a)))
        {
            cout << a[0] * 2 << endl;
        }
        else
        {
            int sum = a[0];
            int x = a[1] + a[2];
            sum += min(a[0], x);
            int sum2 = a[0] + a[1];
            cout << min(sum, sum2) << endl;
        }
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