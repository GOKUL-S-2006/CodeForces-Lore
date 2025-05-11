#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        
         vector<int> prefix(n, 0);
         prefix[0] = arr[0];
         for (int i = 1; i < n; ++i) {
        prefix[i] = prefix[i - 1] + arr[i];
         }
        
        for(int i=0;i<q;i++)
        {
            int l,r,k;
            cin>>l>>r>>k;
            l--; r--;
            int totsum=prefix[n-1];
            totsum=totsum-(prefix[r]-(l > 0 ? prefix[l - 1] : 0));
            totsum+=(r-l+1)*k;
            if(totsum&1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        
      
    }
}
