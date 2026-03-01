#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            int key, value;
            cin >> key >> value;
            auto it = mp.find(key);
            if (it == mp.end())
            {
                mp[key] = value;
            }
        }

        vector<int> v;
        for (auto [key, value] : mp)
        {

            if (key >= 7)
            {
                v.push_back(value);
            }
        }
        auto mn = min_element(v.begin(), v.end());

        if (v.empty())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << *mn << endl;
        }
    }

    return 0;
}