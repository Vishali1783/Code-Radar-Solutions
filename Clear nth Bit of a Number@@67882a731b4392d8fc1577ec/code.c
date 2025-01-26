#include<stdio.h>
int main()
{
    int a,b,newbit;
    scanf("%d",&a);
    scanf("%d",&b);
    newbit = a & ((1<<b));
    printf("%d",newbit);
    return 0;
}