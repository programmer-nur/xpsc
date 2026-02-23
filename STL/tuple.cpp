#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    tuple<string, int, string> student = {"rahim", 12, "012358"};

    auto [name, roll, phone] = student;
    cout << name << roll << " " << phone << " " << '\n';
    return 0;
}