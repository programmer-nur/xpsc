#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector<int> freq(26, 0);

    for (char c : s)
        freq[c - 'A']++;

    int oddCount = 0;
    char oddChar;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] % 2 != 0)
        {
            oddCount++;
            oddChar = 'A' + i;
        }
    }

    if (oddCount > 1)
    {
        cout << "NO SOLUTION";
        return 0;
    }

    string firstHalf = "";

    for (int i = 0; i < 26; i++)
    {
        firstHalf += string(freq[i] / 2, 'A' + i);
    }

    string secondHalf = firstHalf;
    reverse(secondHalf.begin(), secondHalf.end());

    cout << firstHalf;

    if (oddCount == 1)
        cout << string(freq[oddChar - 'A'], oddChar);

    cout << secondHalf;
}