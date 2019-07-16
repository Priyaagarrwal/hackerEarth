#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[1000],i,n,flag=0,x,y;
    cin>>n;
    cin>>x;
    cin>>y;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n-1;i++)

    {
        if(a[i]!=a[i+1])
        {
        if(a[i+1]!=(a[i]+1))
       {
       flag=1;
       break;
       }
        }
    }
       if(flag==1)
        cout<<"NO";
        else
        cout<<"YES";

return 0;
}

