#include <stdio.h>

int main(){
    int fact,count,N,factorial;
    printf("Enter the number whose factorial is needed\n");
    scanf("%d", &N);
    factorial=1;
    count=1;
    while(count<=N){
        factorial=factorial*count;
        count=count+1;
    }
    printf("the value of factorial is %d", factorial);
    return 0;
}