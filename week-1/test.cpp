#include <bits/stdc++.h>
using namespace std;

void rec(int n, int &sum)
{
    if (n == 1)
    {
        return;
    }
    sum *= n;
    rec(n - 1, sum);
}

int main()
{
    int n;
    cin >> n;

    int sum = 1;

    rec(n, sum);
    cout << sum << endl;

    return 0;
}