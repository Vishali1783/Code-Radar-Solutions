#include<stdio.h>
int main()
{
    int a,b,newnum;
    scanf("%d %d",&a,&b);
    newnum = (1<<b) | a;
    printf("%d",newnum);
    return 0;
}