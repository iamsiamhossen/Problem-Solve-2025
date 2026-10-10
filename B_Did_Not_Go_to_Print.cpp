/**
 * Author: iamsiamhossen
 * Created: 09-10-2026 14:02:06
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    stack<int> st;
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        if (s[i - 1] == '1')
        {
            st.push(i);
        }
        else if (s[i - 1] == '2')
        {
            if (!st.empty())
            {
                v.push_back(i);
                st.pop();
            }
        }
        else
        {
            continue;
        }
    }
    while (!st.empty())
    {
        v.push_back(st.top());
        st.pop();
    }
    sort(all(v));
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
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