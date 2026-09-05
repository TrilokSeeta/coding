#include <stdio.h>

int main(){
    int n,r;
    int R=0;
    int z;
    printf("Enter the number:  ");
    scanf("%d",&n);
    z=n;
    while(n!=0){
        r=n%10;
        R=R+(r*r*r);
        n=n/10;
    }
    if(z==R)printf("Sum of cubes of digits of %d is %d and it is an armstrong number\n",z,R);
    else printf("Sum of cubes of digits of %d is %d and it is not an armstrong number\n",z,R);
    return 0;
}