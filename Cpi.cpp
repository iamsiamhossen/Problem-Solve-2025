/**
 * Author: iamsiamhossen
 * Created: 20-04-2025 12:42:14
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
bool matchesRules(const string &s)
{

    if (s == "a")
        return true;

    if (s == "abb")
        return true;

    bool trackb = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (!trackb)
        {
            if (s[i] == 'b')
                trackb = true;
            else if (s[i] != 'a')
                return false;
        }
        else
        {
            if (s[i] != 'b')
                return false;
        }
    }

    return trackb && s[0] == 'a';
}
void solve()
{
    string s;
    cin >> s;
    if (matchesRules(s)==true)
        cout << "string match: " << s << endl;

    else
        cout << "string not match: " << s << endl;
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