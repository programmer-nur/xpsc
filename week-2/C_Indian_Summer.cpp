#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    set<string> s;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string word;
        getline(cin, word);

        if (!s.count(word))
        {
            s.insert(word);
        }
    }

    cout << s.size() << endl;

    return 0;
}