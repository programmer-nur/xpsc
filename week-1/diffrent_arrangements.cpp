#include <bits/stdc++.h>
using namespace std;

int rec(int n)
{
    int sum;
    if (n == 0)
    {
        return 0;
    }
    sum *= n;
    rec(n - 1);

    return sum;
}

int main()
{
    string s = "BANANA";

    int total = s.size();
    int aFac = rec(3);
    int bFac = rec(1);
    int cFac = rec(2);
    int nFac = rec(total);

    int res = nFac / (aFac * bFac * cFac);

    cout << res << endl;
    return 0;
}