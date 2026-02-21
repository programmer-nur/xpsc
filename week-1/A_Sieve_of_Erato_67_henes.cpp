#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = -1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        bool isFound = false;

        for (int i = 0; i < n; i++)
        {
            if (v[i] == 67)
            {
                isFound = true;
                break;
            }
        }

        if (isFound)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}