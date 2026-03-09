#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<string, int> mp;
    for (int i = 1; i <= n; i++)
    {
        string name;
        cin >> name;
        mp[name] = i;
    }

    vector<pair<int, string>> v;
    for (auto x : mp)
    {
        v.push_back({x.second, x.first});
    }

    sort(v.rbegin(), v.rend());

    for (auto x : v)
    {
        cout << x.second << endl;
    }
}