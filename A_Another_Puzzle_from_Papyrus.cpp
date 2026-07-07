/**
 * Author: iamsiamhossen
 * Created: 28-06-2026 21:00:23
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
    int sum1 = accumulate(all(a), 0LL);
    int sum2 = accumulate(all(b), 0LL);
    int min = *min_element(all(a));
    int min2 = *min_element(all(b));
    if (min < min2 or sum1 < sum2)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        int ans = sum1 - sum2;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                ans += k;
                break;
            }
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                cout << -1 << endl;
                return;
            }
        }
        cout << ans << endl;
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