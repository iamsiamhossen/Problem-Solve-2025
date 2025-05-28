/**
 * Author: iamsiamhossen
 * Created: 28-05-2025 22:59:12
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
    vector<int> a(n), b(n);
    int asum = 0, bsum = 0;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        asum += x;
        bsum += y;
        a[i] = x;
        b[i] = y;
    }
    vector<int> c;
    for (int i = 0; i < n; i++)
    {
        c.push_back(a[i] - b[i]);
    }

    // int asum = accumulate(a.begin(), a.end(), 0);
    // int bsum = accumulate(b.begin(), b.end(), 0);
    int csum = accumulate(c.begin(), c.end(), 0);
    int ck = asum - csum;
    if (bsum > k)
    {
        cout << -1 << endl;
        return;
    }
    else if (asum <= k)
    {
        cout << 0 << endl;
        return;
    }
    sort(c.rbegin(), c.rend());
    int chk = asum;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        chk -= c[i];
        if (chk <= k)
        {
            cnt++;
            break;
        }
        else
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}
int32_t main()
{
    fastread();
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case " << t << ": ";
        solve();
    }
    return 0;
}