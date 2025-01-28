#include<stdio.h>
int main()
{
    int age,citizenship;
    scanf("%d %d",&age,&citizenship);
    if(age>18){
        if(citizenship==1){
            printf("Eligible");
        }
        else{
            printf("Not Eligible");
        }
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}