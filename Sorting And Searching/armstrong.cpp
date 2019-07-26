#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int n=0,rem=0,ans=0,num,copy;
cout<<"enter a no";
cin>>num;
copy=num;
while(copy!=0)
{
copy=copy/10;
n++;
}
copy=num;
while(copy!=0)
{
rem=copy%10;
ans=ans+pow(rem,n);
copy=copy/10;
}
if(ans==num)
{
cout<<"no. is armstrong";
}
else{
cout<<"no. is not armstrong";
}
return 0;
}
