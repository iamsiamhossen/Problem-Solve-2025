#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin >> s;
    map<int, int> m;
    for (auto u : s)
    {
        m[u]++;
    }
    int oddcnt = 0, evencnt = 0;
    set<char> s1;
    for (auto u : s)
    {
        s1.insert(u);
    }
    for (auto u : s1)
    {
        if (m[u] % 2 != 0)
        {
            oddcnt++;
        }
        else
        {
            evencnt++;
        }
    }
    if (oddcnt == m.size())
    {
        cout << 1 << endl;
    }
    else if (evencnt == m.size())
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 2 << endl;
    }

    return 0;
}