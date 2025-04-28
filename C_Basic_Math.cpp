/**
 * Author: iamsiamhossen
 * Created: 28-04-2025 09:40:03
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
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
int lcm(int a, int b)
{
    return a / gcd(a, b) * b;
}
int hcf(int a, int b) //Highest Common  Factor and Gcd Both are same 
{
    return a * b / gcd(a, b);
}
{
    return a * b / lcm(a, b);
}
void solve()
{
    int n, m;
    cin >> n >> m;
    int ans = lcm(n, m);
    int ans1 = gcd(n, m);
    cout << ans << " " << ans1 << endl;
    // cout << cnt;
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