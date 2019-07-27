#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int a[100],c=0,i,s=0,n,q,x,y,z;
    cin>>n;
     cin>>q;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
        while(q--)
        {

            cin>>x>>y>>z;
            if(x==1)
              {

                a[y]=z;

              }
            if(x==2)
             {
                 s=0;

                    for(i=y;i<=z;i++)
                    {

                            s=s+a[i];
                            //cout<<s<<endl;
                    }
                    cout<<s<<endl;

            }
        }
        for(i=0;i<n;i++)
    {
        cout<<a[i];
    }



return 0;
}

