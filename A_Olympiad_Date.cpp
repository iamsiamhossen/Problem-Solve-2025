/**
 * Author: iamsiamhossen
 * Created: 25-03-2025 20:57:06
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
    int onecount = 0, twocount = 0, threecount = 0, zerocount = 0, fivecount = 0;
    int cnt = 0;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {

        if (a[i] == 1 and onecount < 1)
            onecount++;
        else if (a[i] == 2 and twocount < 2)
            twocount++;
        else if (a[i] == 3 and threecount < 1)
            threecount++;
        else if (a[i] == 0 and zerocount < 3)
            zerocount++;
        else if (a[i] == 5 and fivecount < 1)
            fivecount++;

        if (onecount + twocount + threecount + zerocount + fivecount == 8)
        {
            if (i == n - 1)
            {
                ans = n;
                cout<<ans<<endl;
                return;
            }
            else
            {
                ans = i;
                break;
            }
            // cout<< i << endl;
        }
    }
    // cout << ans << endl;
    if (onecount + twocount + threecount + zerocount + fivecount != 8)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << ans + 1 << endl;
    }
    // cout << n - cnt << endl;
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