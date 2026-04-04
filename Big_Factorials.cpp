#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if (N <= 6)
    {
        int fact = 1;
        for (int i = 1; i <= N; i++)
        {
            fact *= i;
        }
        cout << fact << endl;
    }
    else
    {
        int fact = 1;
        for (int i = 1; i <= N; i++)
        {
            fact = (fact * i) % 10000;
        }
        printf("%04d\n", fact);
    }

    return 0;
}