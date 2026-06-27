/**
 * Author: iamsiamhossen
 * Created: 27-06-2026 20:12:47
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
    int ans = 0, dis = 0;
    for (int i = 0; i < n; i++)
    {

        unordered_map<int, int> mp;
        while (i < n and a[i] != 1)
        {
            if (mp.find(a[i]) == mp.end())
            {
                dis++;
                mp[a[i]]++;
            }
            if (i < n)
            {
                i++;
            }
        }
    }
    if (dis > 1)
        ans += 2;
    else if (dis == 1)
        ans += 1;
    cout << ans << endl;
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