#include<iostream>
using namespace std;
int fact(int);
int combi(int,int);
void printPasal(int);
int fact(int n)
{
  int f=1;
    while(n>0){
f=n*f;
n--;
}
return(f);
}
int combi(int n,int r)
{
   return(fact(n)/fact(n-r)/fact(r));
}
void printPascal(int line)
{
int i,j,k,r;
for(i=1;i<=line;i++)
{
    k=1;
    r=0;
for(j=1;j<=2*line-1;j++)
{
if(j>=line+1-i && j<=line-1+i &&k)
{
cout<<combi(i-1,r);
k=0;
r++;}
else{
cout<<" ";
k=1;
}
}
cout<<"\n";
}
}
int main()
{
printPascal(6);
}


