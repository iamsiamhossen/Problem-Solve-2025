/**
 * Author: iamsiamhossen
 * Created: 18-04-2026 13:00:36
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
// int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};
void solve()
{
    vector<string> csvLines = {
        "1,Rahim,85.5,A",
        "2,Karim,92.0,A",
        "3,Sami,78.3,B",
        "4,Nabil,65.0,C"
    };
    vector<tuple<int, string, float, char>> students;
    for (string line : csvLines) {
        stringstream ss(line);
        string idStr, name, gradeStr, letterGradeStr;
        getline(ss, idStr, ',');
        getline(ss, name, ',');
        getline(ss, gradeStr, ',');
        getline(ss, letterGradeStr, ',');
        int id = stoi(idStr);
        float grade = stof(gradeStr);
        char letterGrade = letterGradeStr[0];
        students.emplace_back(id, name, grade, letterGrade);
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