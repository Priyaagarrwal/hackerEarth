#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i;
    string s;
    cin>>s;
   int s_len=s.length();
    for(i=0;i<s_len;i++)
    {
        if(s[i]=='1'&& s[i+1]=='1'&&  s[i+2]=='1'&&  s[i+3]=='1'&&  s[i+4]=='1'&&  s[i+5]=='1')
{


        cout<<"Sorry, sorry!"<<endl;
        break;
        }
        else if
            (s[i]=='0'&& s[i+1]=='0'&&  s[i+2]=='0'&&  s[i+3]=='0'&&  s[i+4]=='0'&&  s[i+5]=='0')

            {
            cout<<"Good luck!"<<endl ;
            break;

    }
    }
    return 0;

}
