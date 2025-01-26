#include<stdio.h>
int main()
{
    int a,b,newnum;
    scanf("%d",&a);
    scanf("%d",&b);
    newnum = a^(1<<b);
    printf("%d",newnum);
    return 0;
}