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

        deque<int> dq;
        for (int i = 0; i < n; i++)
        {
            int value;
            cin >> value;
            dq.push_back(value);
        }

        set<int> found;
        int track = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (found.count(dq[i]))
                break;

            found.insert(dq[i]);
            track++;
        }

        cout << n - track << endl;
    }

    return 0;
}