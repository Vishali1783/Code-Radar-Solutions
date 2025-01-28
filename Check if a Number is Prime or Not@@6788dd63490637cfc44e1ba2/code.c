#include<stdio.h>
int main() {
    int n,i;
    int count=0;
    scanf("%d",&n);
    if(n<=1){
        printf("Not Prime");
    }
    else {
        for(i=1;i<=n;i++){
            if(a%i==0){
                count++;
            }
        }
        if(count>2)
            printf("Not Prime");
        else
            printf("Prime");
    }
return 0;  
}