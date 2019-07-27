#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10],i,j,n,s=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<3;i++)
    {  s=s+a[i];
    for(j=i+3;j<n;j=j+3)
        {
            s=s+a[j];
        }
        cout<<s<<" ";
        s=0;
    }
    return 0;
}
