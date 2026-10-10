/**
 * Author: iamsiamhossen
 * Created: 14-07-2026 20:43:36
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
    int maxCount = 0;
    int i = 0;
    while (i < n)
    {
        if (s[i] == '#')
        {
            int cnt = 0;
            while (s[i] == '#')
            {
                cnt++;
                i++;
            }
            maxCount = max(maxCount, cnt);
        }
        i++;
    }
    if(maxCount % 2 == 0)
    {
        cout<<maxCount/2<<endl;
    }
    else
    {
         cout<<(maxCount/2)+1<<endl;
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