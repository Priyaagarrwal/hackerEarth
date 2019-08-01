#include<iostream>
using namespace std;
int main()
{
    int i,j,k,p;
    for(i=1;i<=5;i++)
    {k=0;
    if(i%2==0){
                k=k+i;
                p=k;
                p--;}
                else
                    k=k+1;

        for(j=1;j<=9;j++){
                if(j<=2*i-1){
                    if(j%2==0)
                        cout<<"*";
                    else
                        if(i%2==0){
                        cout<<p;
                    p++;
                k++;}
                else p--;}

        else
            cout<<" ";
        }

        cout<<"\n";
        }
        return 0;
    }


