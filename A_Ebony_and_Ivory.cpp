/**
 * Author: iamsiamhossen
 * Created: 21-05-2025 22:51:29
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
    int a, b, c;
    cin >> a >> b >> c;
    if (c % a == 0 || c % b == 0)
    {
        Yes;
    }
    else if(a>c || b > c)
    {
        No;
    }
    else if (a == b)
    {
        if (c % a == 0)
        {
            Yes;
        }
        else
        {
            No;
        }
    }   
    else
    {
        int x = 1;
        while (1)
        {
            int y = c - (a * x);
            if (y % b == 0)
            {
                Yes;
                return;
            }
            else
            {
                x++;
                if (y < b)
                {
                    break;
                }
            }
        }
        x = 1;
        while (1)
        {
            int y = c - (b * x);
            if (y % a == 0)
            {
                Yes;
                return;
            }
            else
            {
                x++;
                if (y < a)
                {
                    break;
                }
            }
        }
        No;
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