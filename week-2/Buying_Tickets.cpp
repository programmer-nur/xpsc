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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        string s;
        cin >> s;

        vector<int> ans;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')

                ans.push_back(a[i]);
        }

        if (ans.size() < k)
        {
            cout << -1 << endl;
            continue;
        }

        sort(ans.begin(), ans.end());

        int sum = 0;
        for (int i = 0; i < k; i++)
        {
            sum += ans[i];
        }
        cout << sum << endl;
    }

    return 0;
}