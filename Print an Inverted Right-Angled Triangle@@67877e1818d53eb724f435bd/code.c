#include<stdio.h>
int main()
{
    int i,j,N;
    scanf("%d",&N);
    for(i=;i<=N;++i){
        for(j=i;j<=N;++j){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}