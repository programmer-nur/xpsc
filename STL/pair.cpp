#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    pair<pair<string, int>, pair<string, string>> students[n];

    for (int i = 0; i < n; i++)
    {
        cin >> students[i].first.first >> students[i].first.second >> students[i].second.first >> students[i].second.second;
    }

    for (auto [x, y] : students)
    {
        string name = x.first;
        int roll = x.second;
        string addr = y.first;
        string gender = y.second;

        cout << name << " " << roll << " " << addr << " " << gender << '\n';
    }
    return 0;
}