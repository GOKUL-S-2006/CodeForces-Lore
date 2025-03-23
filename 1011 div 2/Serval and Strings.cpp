
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        string s2=string(s.rbegin(),s.rend());
       
        if(k==0 && s<s2)
        {
            cout<<"YES"<<endl;
        }
        else if(k==0 && s>s2)
        {
            cout<<"NO"<<endl;
        }
        else if(k==0 && s==s2)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int c=count(s.begin(),s.end(),s[0]);
            if(c==n)
            {
                cout<<"NO"<<endl;
            }
            
            else
            {
            cout<<"YES"<<endl;
            }
        }
    }
}



