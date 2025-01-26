#include<stdio.h>
int main()
{
    int a,b,bitstatus;
    scanf("%d",&a);
    scanf("%d",&b);
    bitstatus = (a>>b) & 1;
    printf("%d",bitstatus);
    return 0;
}