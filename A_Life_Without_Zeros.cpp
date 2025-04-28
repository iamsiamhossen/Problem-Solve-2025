/**
 * Author: iamsiamhossen
 * Created: 28-04-2025 09:07:23
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
void solve()
{
    string a, b;
    cin >> a >> b;
    int n = stoi(a) + stoi(b);
    string s = to_string(n);
    string ans1 = "";
    for (auto x : s)
    {
        if (x != '0')
        {
            ans1 += x;
        }
    }
    string c, d;
    for (auto x : a)
    {
        if (x != '0')
        {
            c += x;
        }
    }
    for (auto x : b)
    {
        if (x != '0')
        {
            d += x;
        }
    }
    int ans2= stoi(c) + stoi(d);
    if(ans1== to_string(ans2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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