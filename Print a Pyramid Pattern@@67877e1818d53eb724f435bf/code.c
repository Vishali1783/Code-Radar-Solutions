#include<stdio.h>
int main()
{
    int i,space,rows,k=0;
    scanf("%d",&rows);
    for(i=1;i<=rows;++i;k=0){
        for(space=1;space<=rows-i;++j){
            printf(" ");
        }
    }
    while(k! = 2*i -1){
        printf("* ");
    }
    return 0;
}