/**
 * Author: iamsiamhossen
 * Created: 31-05-2025 21:45:29
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
bool cmp(pair<int, int> &a,
         pair<int, int> &b)
{
    return a.second < b.second;
}

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    set<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x <= k)
        {
            a.insert(x);
        }
    }
    set<int> b;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        if (x <= k)
        {
            b.insert(x);
        }
    }
    set<int> finalSet;
    merge(a.begin(), a.end(), b.begin(),
          b.end(), inserter(finalSet, finalSet.begin()));
    if (a.size() < k / 2 or b.size() < k / 2)
    {
        NO;
        return;
    }
    else
    {
        if (finalSet.size() < k)
        {
            NO;
            return;
        }
    }
    YES;
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