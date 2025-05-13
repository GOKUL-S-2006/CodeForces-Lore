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
        int arr[n];
       
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
           
        }
        if(n==1)
        {
            cout<<0<<endl;
        }
        else
        {
             int maxv=INT_MIN;
             int minv=arr[0];
             for(int i=1;i<n;i++)
             {
                 maxv=max(maxv,arr[i]-minv);
             }
            // int rans
              minv=arr[n-1];
             int tempmax=INT_MIN;
             for(int i=0;i<n-1;i++){
                 tempmax=max(tempmax,(minv-arr[i]));
             }
             int maxv3=INT_MIN;
             for(int i=0;i<n-1;i++)
             {
                 maxv3=max(maxv3,arr[i]-arr[i+1]);
             }
             cout<<max(maxv3,max(tempmax,maxv))<<endl;
           
            
        }
        
    }
}
