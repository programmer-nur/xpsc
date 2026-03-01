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
        int x, y;
        cin >> x >> y;

        int alice = (x + y) / 2;
        int bob = y - alice;

        cout << alice << " " << bob << '\n';
    }

    return 0;
}