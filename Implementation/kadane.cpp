#include<iostream>
using namespace std;
int maxsubarraysum(int a[],int n)
{
   int max_so_far=0;
   int max_end_here=0;
   int i;
    for(i=0;i<n;i++)
    {
        max_end_here=max_end_here+a[i];
      if(max_end_here<0)
      {
          max_end_here=0;
      }

       else if (max_so_far<max_end_here)
       {
           max_so_far=max_end_here;
       }
     }
   return max_so_far;
}
int main()
{
    int a[100],i,n,max;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    max= maxsubarraysum(a,n);
    cout<<max;
}
