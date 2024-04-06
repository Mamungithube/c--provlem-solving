    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            string s;
            cin>>s;
     
            sort(s.begin(),s.end());
     
            int cnt[26]= {0};
            for(int i=0; i<n; i++)
            {
                cnt[s[i]-'A']++;
            }
            int rev=0;
            for(int i=0; i<26; i++)
            {
                if(cnt[i]>=1)
                {
                    rev+=cnt[i]+1;
                }
     
            }
            cout<<rev<<endl;
        }
     
        return 0;
    }