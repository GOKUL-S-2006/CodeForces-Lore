// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int temp=n;
        int ops=0;
        while(temp>1)
        {
            if(temp%6==0)
            {
                temp=temp/6;
                ops++;
                
            }
            else
            {
                temp*=2;
                ops++;
            }
        }
        if(temp==1)
        {
        cout<<ops<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}
