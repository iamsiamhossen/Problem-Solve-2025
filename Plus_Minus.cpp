/**
 * Author: iamsiamhossen
 * Created: 21-08-2025 01:36:04
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
    for (auto &u : a)
        cin >> u;
    float cntp = 0, cntn = 0, cntz = 0;
    for (auto &u : a)
    {
        if (u > 0)
            cntp++;
        else if (u < 0)
            cntn++;
        else
            cntz++;
    }
    cout << fixed << setprecision(6) << cntp / float(n) << endl;
    cout << fixed << setprecision(6) << cntn / float(n) << endl;
    cout << fixed << setprecision(6) << cntz / float(n) << endl;
}
int32_t main()
{
    fastread();
    int tc = 1;
    //cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case " << t << ": ";
        solve();
    }
    return 0;
}