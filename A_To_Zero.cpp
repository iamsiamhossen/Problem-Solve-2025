/**
 * Author: iamsiamhossen
 * Created: 17-03-2025 20:44:49
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
    int n, k;
    cin >> n >> k;
    if (n & 1)
    {
        int count = 1;
        int up = n - k;
        k--;
        int mod = up % k;
        if (mod != 0)
        {
            int news = up - mod;
            count += news / k;
            count++;
            cout << count << endl;
        }
        else
        {
            count += up / k;
            cout << count << endl;
        }
    }
    else
    {
        k--;
        int count = 0;
        int mod = n % k;
        if (mod != 0)
        {
            int news = n - mod;
            count += news / k;
            count++;
            cout << count << endl;
        }
        else
        {
            count += n / k;
            cout << count << endl;
        }
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