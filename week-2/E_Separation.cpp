#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        ll n, x;
        cin >> n >> x;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        bool flag = false;
        for (int i = 0; i < n - 1; i++)
        {

            if (a[i] < x && a[i + 1] > x)
            {
                flag = true;
                break;
            }
            else if (a[i] > x && a[i + 1] < x)
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}