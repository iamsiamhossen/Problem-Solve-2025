/**
 * Author: iamsiamhossen
 * Created: 04-04-2026 21:16:02
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
    int m = n * 3;
    // cout<<m<<endl;
    vector<int> a(m);
    for (int i = 0; i < m; i++)
    {
        a[i] = i + 1;
    }
    vector<int> ans;
    int jabo = m / 3;
    for (int i = jabo; i < m; i++)
    {
        ans.push_back(a[i]);
    }
    int sz = ans.size();
    sz = m - sz;
    int cnt = 0;
    vector<int> res(m);
    for(int i=0;i<res.size();i++){
        if(i%3==0){
            res[i] = sz;
            sz--;
        }
    }
    for(int i=0;i<res.size();i++){
        if(res[i]==0){
            res[i] = ans[cnt];
            cnt++;
        }
    }
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
cout<<endl;

    
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