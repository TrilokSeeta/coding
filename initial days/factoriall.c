#include <stdio.h>

int main(){
    int n,fact;
    fact=1;
    printf("Enter the integer whose factorial is needed: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        fact=fact*i;
    }
    printf("factorial is %d",fact);
    return 0;
}