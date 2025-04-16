/**
 * Author: iamsiamhossen
 * Created: 15-04-2025 15:45:30
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
#define NO cout << "NO\n"
// MOD
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define INF 1001001001
void solve()
{
    string s, t;
    cin >> s >> t;
    
    if (s[0] != t[0]) {
        NO;
        return;
    }
    
    vector<int> sn, tn;
    int cnt = 1;
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] == s[i-1]) {
            cnt++;
        } else {
            sn.push_back(cnt);
            cnt = 1;
        }
    }
    sn.push_back(cnt);
    
    cnt = 1;
    for (int i = 1; i < t.size(); ++i) {
        if (t[i] == t[i-1]) {
            cnt++;
        } else {
            tn.push_back(cnt);
            cnt = 1;
        }
    }
    tn.push_back(cnt);
    
    if (sn.size() != tn.size()) {
        NO ;
        return;
    }
    
    for (int i = 0; i < sn.size(); ++i) {
        if (tn[i] < sn[i] || tn[i] > 2 * sn[i]) {
            NO ;
            return;
        }
    }
    
    YES;
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