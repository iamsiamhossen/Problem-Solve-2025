/**
 * Author: iamsiamhossen
 * Created: 16-05-2025 14:54:39
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
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int mina = *min_element(a.begin(), a.end());
    int maxa = *max_element(a.begin(), a.end());

    int ans1 = -1, ans2 = -1;
    for (int i = 0; i < n; i++)
    {
        if (b[i] == mina)
        {
            ans1 = i + 1;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (b[i] == maxa)
        {
            ans2 = i + 1;
            break;
        }
    }
    cout << ans1 << " " << ans2 << endl;
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