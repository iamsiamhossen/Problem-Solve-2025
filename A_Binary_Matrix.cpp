/**
 * Author: iamsiamhossen
 * Created: 15-03-2025 21:50:34
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
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (n == 1)
    {
        int cone = count(all(a[0]), '1');
        cout << cone << endl;
        return;
    }

    if (m == 1)
    {
        int cone = 0;
        for (int i = 0; i < n; i++)
        {
            cone += (a[i][0] == '1');
        }
        cout << cone << endl;
        return;
    }

    vector<int> x(n, 0), y(m, 0);
    int rflip = 0, cflip = 0, total1 = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int val = a[i][j] - '0';
            x[i] ^= val;
            y[j] ^= val;
            total1 += val;
        }
    }
    for (int i = 0; i < n; i++)
        rflip += x[i];
    for (int j = 0; j < m; j++)
        cflip += y[j];

    cout << (rflip == cflip ? rflip : total1) << endl;
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