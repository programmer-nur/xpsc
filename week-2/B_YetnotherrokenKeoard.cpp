#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;

        vector<pair<int, char>> upper_string, lower_string;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'B' && !upper_string.empty())
            {
                upper_string.pop_back();
            }
            else if (s[i] == 'b' && !lower_string.empty())
            {
                lower_string.pop_back();
            }
            else if (s[i] != 'b' && s[i] != 'B')
            {
                if (s[i] >= 'a' && s[i] <= 'z')
                {
                    lower_string.push_back({i, s[i]});
                }
                else
                {
                    upper_string.push_back({i, s[i]});
                }
            }
        }

        vector<pair<int, char>> ans;

        ans.insert(ans.end(), upper_string.begin(), upper_string.end());
        ans.insert(ans.end(), lower_string.begin(), lower_string.end());

        sort(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++)
        {
            char c = ans[i].second;
            int num = ans[i].first;

            cout << c;
        }

        cout << endl;
    }

    string s = "YetAnotherBrokenKeyboard";
    string str = "";

    return 0;
}