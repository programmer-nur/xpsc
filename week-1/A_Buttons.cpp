#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  int total = 0;

  for (int i = 0; i < 2; i++)
  {
    if (a > b)
    {
      total += a;
      a--;
    }
    else
    {
      total += b;
      b--;
    }
  }

  cout << total;

  return 0;
}