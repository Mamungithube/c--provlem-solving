#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--)
    {
        string s,a;
        cin >> s >> a ;
        int number = s.find(a);
        while(number != -1)
        {
            s.replace(number,a.size(),"#");
            number = s.find(a);
        }
        cout << s << endl;
    }
    return 0;
}