/**
 * Author: iamsiamhossen
 * Created: 20-08-2025 01:17:52
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
    for (auto &u : a)
        cin >> u;

    int i = 0, sum = 0, chk1 = INT_MIN, chk2 = INT_MIN;
    while (i < n)
    {
        if (a[i] >= 0)
        {
            while (a[i] >= 0 and i < n)
            {
                chk1 = max(chk1, a[i]);
                i++;
            }
            sum += chk1;
            chk1 = INT_MIN;
        }
        else
        {
            while (a[i] < 0 and i < n)
            {
                chk2 = max(chk2, a[i]);
                i++;
            }
            sum += chk2;
            chk2 = INT_MIN;
        }
    }
    cout << sum << endl;
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