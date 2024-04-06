 #include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while (T--){
        string s;
        cin>> s;
        int first_3_num=(s[0]-48)+(s[1]-48)+(s[2]-48);
        int last_3_num=(s[3]-48)+(s[4]-48)+(s[5]-48);
        if(first_3_num==last_3_num)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}