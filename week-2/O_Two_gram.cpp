#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string s;
    cin >> s;

    map<string, int> mp;

    for (int i = 0; i < n - 1; i++)
    {
        string two = s.substr(i, 2);
        mp[two]++;
    }

    int mx = 0;
    string ans;

    for (auto p : mp)
    {
        if (p.second > mx)
        {
            mx = p.second;
            ans = p.first;
        }
    }

    cout << ans << "\n";
}