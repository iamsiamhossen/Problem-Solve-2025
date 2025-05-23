/**
 * Author: iamsiamhossen
 * Created: 21-05-2025 00:14:54
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
    int n, k, d, w;
    cin >> n >> k >> d >> w;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        q.push(a);
    }
    int totaltime = d + w;
    int cnt = 0;
    while (!q.empty())
    {
        cnt++;
        int x = q.front();
        q.pop();
        for (int i = 1; i < k; i++)
        {
            if (!q.empty())
            {
                int cur = q.front();
                if ((cur - x) > totaltime)
                    break;
                else
                {
                    if (!q.empty())
                    {
                        q.pop();
                    }
                }
            }
        }
    }

    cout << cnt << endl;
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