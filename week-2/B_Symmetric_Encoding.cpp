#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string b;
        cin >> b;

        set<char> st(b.begin(), b.end());
        string r;

        for (char c : st)
            r += c;

        map<char, char> mp;
        int m = r.size();

        for (int i = 0; i < m; i++)
        {
            mp[r[i]] = r[m - i - 1];
        }

        string ans;
        for (char c : b)
        {
            ans += mp[c];
        }

        cout << ans << "\n";
    }

    return 0;
}