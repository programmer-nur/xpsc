#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    vector<long long> a(N);
    for (int i = 0; i < N; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    int i = K; // example split

    vector<long long> S1, S2;

    for (int j = 0; j < i; j++)
        S1.push_back(a[j]);

    for (int j = i; j < N; j++)
        S2.push_back(a[j]);

    cout << "S1: ";
    for (auto x : S1)
        cout << x << " ";

    cout << "\nS2: ";
    for (auto x : S2)
        cout << x << " ";
}