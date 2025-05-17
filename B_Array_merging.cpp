/**
 * Author: iamsiamhossen
 * Created: 15-05-2025 14:26:42
 **/
#include <bits/stdc++.h>
using namespace std;
// fastread
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
// Shortcut
#define endl "\n"
#define int long long
#define float double
#define aint(X) (X).begin(), (X).end()
#define Reverse(X) reverse(Aint(X))
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
    vector<int> a(n), b(n);
    map<int, int> m1, m2;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    int L = 0, R = 0;
    while (L < n)
    {
        int cnt = 1, x = a[L];
        while (a[L] == a[L + 1] && (L + 1) < n)
        {
            L++;
            cnt++;
        }
        m1[x] = max(m1[x], cnt);
        L++;
    }

    while (R < n)
    {
        int cnt = 1, x = b[R];
        while (b[R] == b[R + 1] && (R + 1) < n)
        {
            R++;
            cnt++;
        }
        m2[x] = max(m2[x], cnt);
        R++;
    }

    map<int, int> ans;
    for (auto [x, y] : m1)
    {
        ans[x] += y;
    }
    for (auto [x, y] : m2)
    {
        ans[x] += y;
    }

    int sol = INT_MIN;
    for (auto [x, y] : ans)
    {
        sol = max(sol, y);
    }
    cout << sol << endl;
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