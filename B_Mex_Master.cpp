/**
 * Author: iamsiamhossen
 * Created: 12-12-2025 14:01:08
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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int zcount = 0, onecnt = 0;
    bool ok = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            zcount++;
        if (a[i] == 1)
            onecnt++;
        if (a[i] >= 2)
            ok = true;
    }
    int tothercount = n - zcount;
    int tr = zcount - tothercount;
    if (tr <= 1)
    {
        cout << 0 << endl;
    }
    else if (tothercount == 0 or ok)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 2 << endl;
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