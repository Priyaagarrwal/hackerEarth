#include<iostream>
using namespace std;

#define  ll long long int
#define debug(c) cout << #c << " = " << c << endl;

int main()
{
      ll t;
      cin>>t;
      while(t--)
      {
                    ll n,c,d,s=0;
                    char a,b;
                    string abc;
                    char arr[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
                    cin>>abc;
                    n=abc.length();
                    ll i=0;
                    ll j=n-1;
                    while(i!=n && j!=-1)
                    {
                        a=abc[i];
                        b=abc[j];
                            for(int k=0;k<26;k++)
                            {
                                if(a==arr[k])
                                {
                                    c=k+1;

                                }
                                if(b==arr[k])
                                {
                                    d=k+1;
                                }
                             }


                        //    s=s+c+d;
                            //cout<<arr[c]<<" "<<arr[d]<<endl;
                      //      cout<<c<<" "<<d<<endl;
                            s=s+c+d-1;
                      //     cout<<s%26<<endl;
                            cout<<arr[s%26]<<"";
                            s=0;
                         //   debug(i);
                       //     debug(j);
                      i++;
                      j--;
                   }
              cout<<endl;
          }
    return 0;
}
