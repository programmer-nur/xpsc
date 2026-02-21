#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int multiply = -1;
    int i = 1;
    while (multiply <= b)
    {
        multiply = c * i;

        if (multiply >= a && multiply <= b)
        {
            cout << multiply << endl;
            return 0;
        }

        i++;
    }

    cout << -1 << endl;

    return 0;

    // alternative mathmatical formula
    // int first = ((a + c - 1) / c) * c;  //  a / c = 10 / 7 = 1.42, ceil(1.42) = 2

    // if (first <= b)
    //     cout << first << endl;
    // else
    //     cout << -1 << endl;
}