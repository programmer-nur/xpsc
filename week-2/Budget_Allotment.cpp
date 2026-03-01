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

        deque<int> dq(n);

        for (int i = 0; i < n; i++)
            cin >> dq[i];

        int count = 0;

        int guard = 0;
        for (int i = 0; i < n; i++)
        {
            if (k < dq[i])
            {
                guard = i;
            }
        }
    }

    return 0;
}