#include <bits/stdc++.h>
using namespace std;
const long long N = 1e6 + 10;
vector<int> divisor[N];
long long countDivisor[N];
int sumDivisor[N];

void precompute()
{
    for (long long i = 1; i <= N; i++)
    {
        for (long long j = i; j <= N; j += i)
        {
            divisor[j].push_back(i);
            // countDivisor[j]++;
            // sumDivisor[j] += i;
        }
    }
}

// void solve()
// {
//     precompute();
//     // int n = 12;
//     // // cout << "Divisors of " << n << ": ";
//     // for (int d : divisor[n]) {
//     //     cout << d << " ";
//     // }
//     // cout << endl;
//     int n;
//     cin >> n;
//     cout << countDivisor[n] << endl;
//     // cout << "Sum of divisors of " << n << ": " << sumDivisor[n] << endl;
// }
int32_t main()
{
    precompute();
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case " << t << ": ";

        long long n;
        cin >> n;
        for (int d : divisor[n])
        {
            cout << d << " ";
        }
        cout<<endl;
        // cout << countDivisor[n] << endl;
        // solve();
    }
    return 0;
}