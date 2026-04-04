/**
 * Author: iamsiamhossen
 * Created: 01-02-2026 10:00:39
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
    for (int i = 0; i < n; i++)
    {
        string s, t;
        cin >> s >> t;
        map<char, int> mp;
        for (auto c : s)
        {
            mp[c]++;
        }
        map<char, int> mp1;
        for (auto c : t)
        {
            mp1[c]++;
        }
        set<char> st;
        for (auto c : s)
        {
            st.insert(c);
        }
        for (auto u : st)
        {
            if (mp[u] > mp1[u])
            {
                cout << "Impossible" << endl;
                return;
            }
            mp1[u] -= mp[u];
        }
        vector<char> res;
        for (auto [key, val] : mp1)
        {
            if (val > 0)
            {
                for (int i = 0; i < val; i++)
                {
                    res.push_back(key);
                }
            }
        }
        string answer = "";
        int x = -1;
        for (int i = 0; i < res.size(); i++)
        {
            if (res[i] < s[0])
            {
                answer += res[i];
                x = i;
            }
        }
        cout << answer << s;
        for (int i = x + 1; i < res.size(); i++)
        {
            cout << res[i];
        }
        cout << endl;
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