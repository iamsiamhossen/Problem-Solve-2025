#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define int long long
const int N = 1e6;
int divisors[N];
void precompute()
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j <= N; j += i)
        {
            divisors[j]++;
        }
    }
}
int32_t main()
{
    fastread();
    precompute(); 
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        int n;
        cin >> n;
        cout << divisors[n] << endl; 
    }
    return 0;
}