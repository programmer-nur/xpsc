#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    set<int> s(a.begin(), a.end());
    int operation = 0;

    for (int i = 0; i < x; i++)
        if (!s.count(i))
            operation++;
    if (s.count(x))
        operation++;

    cout << operation << endl;
    return 0;
}