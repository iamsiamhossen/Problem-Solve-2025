/**
* Author: iamsiamhossen
* Created: 04-04-2026 20:52:53
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
//int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};
void solve()
{
    vector<int> a;
    for(int i=0;i<7;i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    sort(all(a));
    int sum = 0;
    for(int i=0;i<6;i++){
        sum += a[i];
    }
   
    sum = -sum;
    sum+=a[6];
    cout<<sum<<endl;
    // sum2=-sum2;
    // sum+=a[5];
    // cout<<max(sum,sum2)<<endl;

       
}
int32_t main()
{
    fastread();
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case " << t << ": ";
        solve();m
    }
    return 0;
}