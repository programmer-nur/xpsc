#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int tc = 1;

    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;
        vector<ll> h(n);
        for (int i = 0; i < n; i++)
            cin >> h[i];

        ll a = 0, b = 0;

        for (int i = 0; i < n; i++)
        {
            if (h[i] == 1)
                a++;
            else
                b++;
        }

        ll res = b + (a + 1) / 2;

        cout << res << endl;
    }

    return 0;
}