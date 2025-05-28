#include <bits/stdc++.h>
using namespace std;
// Let say we have N and q that give queries and a big array a[n]
//  N= 10^5
//  q = 10^5
//  a[n] = 10^5
//  so amra jodi all n er jonno all quesries ber korte chai then time complexity will be O(n*q) which is not feasible
//  So we can use precomputation to find the answer in O(1) time for each query
const int N = 1e5 + 5;
int hsh[N]; // This will store the precomputed values
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            hsh[a[i]]++; // Precomputing the frequency of each element
        }
        int q;
        cin >> q;
        while (q--)
        {
            int x;
            cin >> x;
            // For each query, we can directly access the precomputed value
            cout << hsh[x] << endl; // This will give us the frequency of x in O(1) time
        }
    }


    return 0;
}