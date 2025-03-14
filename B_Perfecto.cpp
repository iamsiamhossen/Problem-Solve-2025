/**
 * Author: iamsiamhossen
 * Created: 28-02-2025 21:08:03
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

bool isPerfectSquare(int x)
{
    int s = sqrt(x);
    return (s * s == x);
}

void solve()
{
    int n;
    cin >> n;
    int c = (n * (n + 1)) / 2;
    // if (n == 1)
    // {
    //     cout << "-1" << endl;
    // }
   if (isPerfectSquare(c))
    {
        cout << "-1" << endl;
    }
    else
    {
        vector<int> p;
        for (int i = 1; i <= n; i++)
        {
            if(i%2==0){
                p.push_back(i);
            }
        }
        vector<int> q;
        for (int i = 1; i <= n; i++)
        {
            if(i&1){
                q.push_back(i);
            }
        }
        vector<int> r;
        int j=0;
        for (int i = 0; i <= n/3; i++)
        {
           r.push_back(p[j]);
           r.push_back(q[j]);
           r.push_back(q[j+1]);
           j++;
        }
        
       
        for (auto u : r)
        {
            cout << u << " ";
        }
        cout << endl;
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