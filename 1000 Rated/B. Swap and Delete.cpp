#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int zc=count(s.begin(),s.end(),'0');
         int oc=count(s.begin(),s.end(),'1');
         if(zc==s.size() || oc==s.size())
         {
             cout<<s.size()<<endl;
         }
         else if(zc==oc)
         {
             cout<<0<<endl;
         }
         else
         {
             int i;
             int n=s.size();
        
               for(i = 0; i < n; i++){
                     if(s[i] == '0'){
                if(oc){
                    oc--;
                }
                else{
                    break;
                }
            }
            else{
                if(zc){
                    zc--;
                }
                else{
                    break;
                }
            }
        }
        
       
             cout<<(n-i)<<endl;
         }
        
    }
}
