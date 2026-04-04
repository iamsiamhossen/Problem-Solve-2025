/**
 * Author: iamsiamhossen
 * Created: 25-01-2026 21:13:28
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
    for (auto &u : a)
        cin >> u;
    int max_ele = *max_element(all(a));
    int ind = max_element(all(a)) - a.begin();
    int x = a[0];
    if (x != max_ele)
    {
        cout << max_ele << " ";
        for (int i = 1; i < n; i++)
        {
            if (i == ind)
                cout << a[0] << " ";
            else
                cout << a[i] << " ";
        }
        cout<<endl;
    }
    else
    {
        int smax = INT_MIN, idx = -1;
        for (int i = n - 1; i >= 1; i--)
        {
            if (a[i] > smax)
            {
                smax = a[i];
                idx = i;
            }
        }
        cout<<a[0]<<" "<<smax<<" ";
        for (int i = 1; i < n; i++)
        {
            if (i != idx)
                cout << a[i] << " ";
        }
        cout<<endl;
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