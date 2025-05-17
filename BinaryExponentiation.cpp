/**
 * Author: iamsiamhossen
 * Created: 05-05-2025 15:40:28
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
// Recursion Technique
int binExp(int a, int b) //log(b)
{
    if (b == 0)
        return 1;
    if (b & 1)
    {
        return a * binExp(a, b / 2) * binExp(a, b / 2);
    }
    else
    {
        return binExp(a, b / 2) * binExp(a, b / 2);
    }
}
// Iteretive Technique
int binExpite(int a, int b) //Log(b)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans *= a;
        }
        a *= a;
        b >>= 1; 
    }
    return ans;
}
void solve()
{
    int a, b;
    cin >> a >> b;
    cout << binExp(a, b) << endl;
    cout << binExpite(a, b) << endl;
}
int32_t main()
{
    fastread();
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case " << t << ": ";
        solve();
    }
    return 0;
}