/**
 * Author: iamsiamhossen
 * Created: 20-05-2025 22:00:44
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
    vector<int> b(n + 1);
    for (int i = 0; i < n + 1; i++)
    {
        cin >> b[i];
    }

    int ans = 1, cnt = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int x = min(a[i], b[i]);
        int y = max(a[i], b[i]);
        if (x <= b[n] and y >= b[n])
        {
            cnt = 0;
        }
        int t = abs(x - b[n]);
        int t2 = abs(y - b[n]);
        int t3 = min(t, t2);
        cnt = min(cnt, t3);
        ans+=y-x;
    }
    ans+=cnt;
    cout<<ans<<endl;
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