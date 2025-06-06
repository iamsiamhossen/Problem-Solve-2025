/**
 * Author: iamsiamhossen
 * Created: 29-04-2025 16:11:06
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
const int N = 1e6 + 9;
vector<int> d[N];
void precompute()
{
    for (int i = 1; i < N; i++)
    {
        for (int j = i; j < N; j += i)
        {
            d[j].push_back(i);
            
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int val : d[n])
    {
        ans += val;
        if (val == n)
        {
            ans -= val;
        }
    }
    if(ans>n) cout<<"abundant"<<endl;
    else if(ans<n) cout<<"deficient"<<endl;
    else cout<<"perfect"<<endl;
}
int32_t main()
{
    fastread();
    precompute();
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case " << t << ": ";
        solve();
    }
    return 0;
}