/**
 * Author: iamsiamhossen
 * Created: 28-11-2025 21:43:02
 **/
#include <bits/stdc++.h>
using namespace std;
// fastread
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
// Shortcut
#define endl "\n"
#define int long long
#define float double
#define all(X) (X).rbegin(), (X).rend()
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
    set<int> chk;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        chk.insert(a[i]);
    }
    if (chk.size() == 1)
    {
        cout << a[0] << endl;
    }
    else
    {
        sort(all(a));
        int cnt = 0, i = 0;
        while (a[i] != 0 and i < n)
        {
            cnt++;
            i++;
        }
        cout << (cnt - 1) + 1 << endl;
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