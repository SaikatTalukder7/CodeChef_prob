#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if (s[0] == s[s.size() - 1] && s[1] == 'w')
    {
        cout << "Cute";
    }
    else
    {
        cout << "No";
    }
}
