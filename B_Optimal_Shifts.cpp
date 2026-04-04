/**
 * Author: iamsiamhossen
 * Created: 27-01-2026 22:47:58
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
    string s;
    cin >> s;
    if (n == 1 and s[0] == '1')
    {
        cout << 0 << endl;
        return;
    }
    int zero = 0;
    int ans = INT_MIN;
    int i = 0;
    while (i < n)
    {
        if (s[i] == '0')
        {
            zero++;
            i++;
        }
        else
        {
            ans = max(ans, zero);
            zero = 0;
            i++;
        }
    }
    //    cout<<zero;
    if (i == n and s[n - 1] == '0')
    {
        ans = max(ans, zero);
    }
    if (s[0] != '0')
    {
        cout << ans << endl;
    }
    else
    {
        int cnt=0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                cnt++;
            }
            else
            {
                break;
            }
        }
        int cnt2=0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                cnt2++;
            }
            else
            {
                break;
            }
        }
        cout<<max(ans,cnt+cnt2)<<endl;
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