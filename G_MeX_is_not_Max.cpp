/**
 * Author: iamsiamhossen
 * Created: 05-09-2025 15:20:26
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
    int czro = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            czro++;
        }
    }
    int sum = 0;
    sum = accumulate(all(a), 0ll);
    int sum2 = n * (n + 1) / 2;
    int x = (sum2 - sum) / czro;
    if (czro == n or sum2 == sum)
        cout << 0 << endl;
    else
        cout << x << endl;
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