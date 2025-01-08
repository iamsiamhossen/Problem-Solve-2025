/**
 * Author: iamsiamhossen
 * Created: 03-01-2025 22:34:44
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
    bool ok = false;
    if (a >= 0) // b=3(1,0,3)   c=3(1,0,3)
    {
        if (a == 0)
        {
            if ((b == 3 and c == 6) or (b == 4 and c == 4) or (b == 6 and c == 3))
            {
                ok = true;
            }
        }
        else if (a == 1) //(L,D)= b=3(1,0,3) c=1(1,0,3) or b=1(1,0,3)   c=3(1,0,3)
        {
            if (((b == 4 and c == 2) or (b == 3 and c == 4) or (b == 6 and c == 1)) or (b == 2 and c == 4) or (b == 4 and c == 3) or (b == 1 and c == 6))
            {
                ok = true;
            }
        }
        else if (a == 2) //(D,D)= b=1(1,0,3)   c=1(1,0,3)
        {
            if (((b == 2 and c == 2) or (b == 1 and c == 4) or (b == 4 and c == 1)))
            {
                ok = true;
            }
        }
        else if (a == 3) //(W,L)= b=0(1,0,3)   c=3(1,0,3)  or b=3(1,0,3)   c=0(1,0,3)
        {
            if (((b == 1 and c == 4) or (b == 0 and c == 6) or (b == 3 and c == 3)) or
                ((b == 4 and c == 1) or (b == 6 and c == 0) or (b == 3 and c == 3)))
            {
                ok = true;
            }
        }
        //  4= W D
        //  6= W W
        //  1= D L
        else if (a == 4) //(W,D)= b=0(1,0,3)   c=1(1,0,3)  or b=3(1,0,3)   c=0(1,0,3)
        {
            if (((b == 0 and c == 4) or (b == 1 and c == 2) or (b == 3 and c == 1)) or
                ((b == 4 and c == 0) or (b == 2 and c == 1) or (b == 1 and c == 3)))
            {
                ok = true;
            }
        }
        else if (a == 6) //(W,W)= b=0(1,0,3)   c=0(1,0,3)  or b=3(1,0,3)   c=0(1,0,3)
        {
            if (((b == 0 and c == 3) or (b == 1 and c == 1) or (b == 3 and c == 0)))
            {
                ok = true;
            }
        }
    }
    if (ok)
        cout << "perfectus" << endl;
    else
        cout << "invalidum" << endl;
}
int32_t main()
{
    fastread();
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        cout << "Case " << t << ": ";
        solve();
    }
    return 0;
}