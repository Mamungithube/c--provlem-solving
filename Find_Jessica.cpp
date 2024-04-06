#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin, a);
    stringstream ss(a);
    int flag =0;
    string word;
    while(ss >> word)
    {
        if(word == "Jessica")
        {
            flag=1;
        }
    }
    if(flag ==1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}