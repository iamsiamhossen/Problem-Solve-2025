/**
 * Author: iamsiamhossen
 * Created: 07-09-2025 21:43:04
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
bool isprime(int N)
{
    if (N < 2 || (!(N & 1) && N != 2))
        return false;
    for (int i = 3; i * i <= N; i += 2)
    {
        if (!(N % i))
            return false;
    }
    return true;
}

void solve()
{
    int x, n;
    cin >> x >> n;

    if (isprime(n))
    {
        int ans = 0;
        ans = x * n;
        ans += n / n;
        if (ans & 1)
        {
            cout << -1 << endl;
            return;
        }
        else
        {
            cout << ans << endl;
            return;
        }
    }
    else
    {
        int x1 = n / 2;
        int tmp = -1;
        for (int i = x1; i >= 1; i--)
        {
            if (n % i == 0)
            {
                tmp = i;
                break;
            }
        }
        int ans = 0;
        if (tmp > 0)
        {
            ans = x * tmp;
            ans += n / tmp;
        }
        else
        {
            ans += x * n;
            ans += n / n;
            
        }
        if (ans & 1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
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