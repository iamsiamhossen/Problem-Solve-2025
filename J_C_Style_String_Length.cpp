/**
 * Author: iamsiamhossen
 * Created: 22-12-2025 19:39:28
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
    stack<char> st;
    int cnt = 0;
    for (auto u : s)
    {
        if (!st.empty())
        {
            if (st.top() == '\\' and u == '\\')
            {
                cnt++;
                st.pop();
            }
            else if (st.top() == '\\' and u == '0')
            {
                st.pop();
                break;
            }
            else if (st.top() == '0' and u == '0')
            {
                cnt += 2;
                st.pop();
            }
            else
            {
                st.push(u);
            }
        }
        else
        {
            st.push(u);
        }
    }
    if (!st.empty())
    {
        if (st.top() == '\\')
        {
            cout << "INVALID" << endl;
            return;
        }
        else
        {
            cout << cnt + 1 << endl;
            return;
        }
    }
    else
    {
        cout << cnt << endl;
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