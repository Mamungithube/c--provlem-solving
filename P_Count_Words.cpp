#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    bool word = false;
    int cnt = 0;
    for (char c:s)
    {
        if (isalpha(c))
        {
            if (word == false)
            {
                cnt++;
            }
            word = true;
        }
        else
        {
            word = false;
        }
    }
    cout << cnt;
    return 0;
}