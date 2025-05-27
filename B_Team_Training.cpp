/**
 * Author: iamsiamhossen
 * Created: 27-05-2025 22:39:45
 **/
#include <bits/stdc++.h>
using namespace std;
// fastread
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
// Shortcut
#define endl "\n"
#define int long long
#define float double
#define all(X) (X).rbegin(), (X).rend()
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
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(all(a));
    int cnt = 0, idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= x)
            cnt++;
        else
        {
            idx = i;
            break;
        }
    }
    int cnt1 = 0, sum = 0;
    if (idx != -1)
    {
        for (int i = idx; i < n; i++)
        {
            cnt1++;
            sum += a[i];
            if (a[i] * cnt1 >= x)
            {
                cnt++;
                cnt1 = 0;
                sum = 0;
            }
        }
    }
    cout << cnt << endl;
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