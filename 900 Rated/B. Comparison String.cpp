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
       
       int curlen=1;
       int maxlen=1;
       for(int i=1;i<n;i++)
       {
           if(s[i]==s[i-1])
           {
               curlen++;
               
           }
           else
           {
               maxlen=max(maxlen,curlen);
               curlen=1;
           }
       }
       cout<<max(maxlen,curlen)<<endl;
        
        
    }
}
