#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;

    cin >> s;

    int pos = s.size() - 3;
    string ch = s.substr(pos, 'nta');

    if (ch == "nta")
    {
        cout << "Yes" << '\n';
    }
    else
    {
        cout << "No" << '\n';
    }
    return 0;
}