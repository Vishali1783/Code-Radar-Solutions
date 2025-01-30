#include<stdio.h>
int main()
{
    int i,rows;
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=0;j<=rows;j++){
            printf("* ");
        }
        printf("\n")
    }
    return 0;

}