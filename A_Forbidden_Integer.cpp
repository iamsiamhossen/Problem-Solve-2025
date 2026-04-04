/**
 * Author: iamsiamhossen
 * Created: 26-08-2025 11:05:51
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
    int n, k, x;
    cin >> n >> k >> x;
    if (k == 1 or (x == 1 and n % k == x))
    {
        NO;
        return;
    }
    else if (x != 1)
    {
        YES;
        cout << n << endl;
        for (int i = 1; i <= n; i++)
        {
            cout << 1 << " ";
        }
        cout << endl;
    }
    
    else
    {
        YES;
        if (n % k == 0)
        {
            cout << n / k << endl;
            for (int i = 1; i <= n / k; i++)
            {
                cout << k << " ";
            }
            cout << endl;
        }
        else
        {

            cout << n / k + 1 << endl;
            for (int i = 1; i <= n / k; i++)
            {
                cout << k << " ";
            }
            cout << n % k << endl;
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