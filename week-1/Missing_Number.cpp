#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n - 1);

    for (int i = 0; i < n - 1; i++)
    {
        cin >> v[i];
    }

    long long sum = (long long)n * (n + 1) / 2;

    long long sum2 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum2 += v[i];
    }

    cout << sum - sum2 << endl;
    return 0;
}