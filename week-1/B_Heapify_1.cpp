#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 7;

vector<int> group(N + 1, -1);

void percompute()
{
    int grp = 1;
    for (int i = 1; i < N; i++)
    {
        if (group[i] == -1)
        {
            for (int j = i; j < N; j * 2)
            {
            }
        }
    }
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 1; i <= a.size(); i++)
        {
            if (1 <= i <= n / 2)
            {
                int crr = i - 1;
                int crr2 = (i * 2) - 1;
                swap(a[crr], a[crr2]);
            }
        }
        bool isFound = true;

        if (isFound)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}