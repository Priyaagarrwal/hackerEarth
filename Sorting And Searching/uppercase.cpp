#include<stdio.h>
int main()
{
    int i=0;
    char str[100],up[100];
    printf("enter the string\n");
     gets(str);
    while(str[i]!='\0')
    {
    if(str[i]>='a'&& str[i]<='z')
    {
        up[i]=str[i]-32;
    }
    else
        up[i]=str[i];
    i++;
    }
    up[i]='\0';
    puts(up);
    return 0;
}

