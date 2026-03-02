#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = -1;
    cin >> tc;

    while (tc--)
    {
        int n;

        cin >> n;
        deque<long long> dq(n);

        for (int i = 0; i < n; i++)
            cin >> dq[i];

        deque<long long> ans;

        for (int i = 0; i < n; i++)
        {
            int dvalue = dq[i];

            if (ans.empty() || dvalue < ans.front())
            {
                ans.push_front(dvalue);
            }
            else
            {
                ans.push_back(dvalue);
            }
        }

        for (auto x : ans)
        {
            cout << x << " ";
        }

        cout << endl;
    }

    return 0;
}