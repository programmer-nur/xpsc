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

        int total_min = n * k;
        int hours = total_min / 60;
        int minutes = total_min % 60;

        cout << hours << " " << minutes << endl;
    }

    return 0;
}