/**
 * Author: iamsiamhossen
 * Created: 25-04-2025 22:28:43
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
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    } 
    map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }
   if(mp.size()==1) Yes;
   else if(mp.size()==2)
   {
      int cnt= max(mp.begin()->second, mp.rbegin()->second);
      int cnt2= n-cnt;
      if(cnt2==cnt|| cnt2==cnt-1) Yes;
      else No;  

   }
   else No;

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