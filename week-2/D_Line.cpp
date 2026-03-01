#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        ll sum = 0;
        vector<ll> gain;

        for (int i = 0; i < n; i++)
        {
            ll left_value = i;          // if L
            ll right_value = n - i - 1; // if R

            if (s[i] == 'L')
            {
                sum += left_value;

                if (right_value > left_value)
                    gain.push_back(right_value - left_value);
            }
            else
            {
                sum += right_value;

                if (left_value > right_value)
                    gain.push_back(left_value - right_value);
            }
        }

        sort(gain.begin(), gain.end(), greater<ll>());

        vector<ll> ans;

        for (int k = 0; k < n; k++)
        {
            if (k < gain.size())
                sum += gain[k];

            ans.push_back(sum);
        }

        for (ll x : ans)
            cout << x << " ";

        cout << "\n";
    }

    return 0;
}