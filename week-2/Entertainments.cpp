#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int toy = n * 200;
    int tv = 1000;

    cout << (toy < tv ? toy : tv) << '\n';

    return 0;
}