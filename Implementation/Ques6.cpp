#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,t;
    cin>>t;
   while(t--){
        cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+n-1;j++)

     {
         if(j>=n+1-i&&j<=n-1+i)
         cout<<"*";
         else
            cout<<" ";

     }
     cout<<endl;

        }
   }

        return 0;
    }

