/**
 * Author: iamsiamhossen
 * Created: 01-09-2025 22:29:27
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
// int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = INT_MIN;
    int sum = 0;
    sort(all(a));
    int i = 0;
    for (i = 0; i < n - 1; i++)
    {
        if ((a[i + 1] - a[i]) <= m)
        {
            sum++;
            if (i == n - 2)
            {
                ans = max(ans, sum);
            }
        }
        else
        {
            ans = max(ans, sum);
            sum = 0;
        }
    }

    if (n == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << n - (ans + 1) << endl;
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