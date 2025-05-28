/**
 * Author: iamsiamhossen
 * Created: 28-05-2025 19:53:15
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
const int N = 1e5 + 5;
vector<int> fact(N);
void solve()
{
    // If Given Value
    // T - 10^5
    // N - 10^5
    // if we need to find factorial of n then for all n the complexity will be O(t*n) which is not feasible
    // So here we can use precomputation to find factorial of n in O(1) time
    // with modulo 10^9 + 7
    int n;
    cin >> n;
    cout<< fact[n] << endl;
}
int32_t main()
{
    fastread();
    fact[0] = fact[1] = 1;
    for (int i = 2; i <= N; i++)
    {
        fact[i] = (fact[i - 1] * i) % MOD; // Precomputing factorials
    }
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case " << t << ": ";
        solve();
    }
    return 0;
}