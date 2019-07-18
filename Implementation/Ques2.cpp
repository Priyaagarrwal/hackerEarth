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


            if(a[i]>=x && a[n-1]<=y)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;


        return 0;
}
