/**
 * Author: iamsiamhossen
 * Created: 25-05-2025 13:23:05
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
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    int cnt = count(s.begin(), s.end(), '1');
    if (cnt == 0)
    {
        int t = n / m;
        int ans = t / k;
        cout << ans << endl;
        return;
    }
    int cnt1 = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            cnt1 = 0;
        else
        {
            cnt1++;
            if (cnt1 == m)
            {
                ans++;
                cnt1 = 0;
                i += k;
                i--;
                //cout<<i<<endl;
            }
        }
    }

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