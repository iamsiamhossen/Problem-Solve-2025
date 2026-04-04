/**
 * Author: iamsiamhossen
 * Created: 10-10-2025 16:10:47
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
    string s;
    cin >> s;
    if (s[0] == s[1] and s[0] == s[3] and s[0] == s[4])
    {
        cout << s << endl;
    }
    else
    {
        string x = s.substr(0, 2);
        string z = s.substr(3, 4);
        int y = stoi(x);
        int v = stoi(z);
        if (y < 12)
        {
            if (y == 11 and v > 11)
            {
                cout << "22:22" << endl;
            }
            else
            {
                cout << "11:11" << endl;
            }
        }
        else if (y >= 12 and y < 23)
        {
            if (y == 22 and v > 22)
            {

                cout << "00:00" << endl;
            }
            else
            {
                cout << "22:22" << endl;
            }
        }
        else
        {
            cout << "00:00" << endl;
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