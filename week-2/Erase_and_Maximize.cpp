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
        long long s;
        cin >> n >> s;

        int base = s / n;
        int rem = s % n;

        vector<int> choose;
        for (int i = 0; i < n; i++)
        {
            if (i < rem)
                choose.push_back(base + 1);
            else
                choose.push_back(base);
        }

        int sum = 0;
        for (int i = 0; i < choose.size(); i++)
        {
            if (choose[i] == 6)
            {
                sum += 5;
            }
            else
            {
                sum += 6;
            }
        }
        cout << sum << endl;
    }

    return 0;
}