#include <stdio.h>

int main(){
    int n,r,z;
    int R=0;
    printf("Enter the number:  ");
    scanf("%d",&n);
    z=n;
    while(n!=0){
        r=n%10;
        n=n/10;
        R=R+r;
        if(n!=0)R=R*10;
    }
    if(z==R)printf("Reverse of %d is %d and it is a palindrome\n ",z,R);
    else printf("Reverse of %d is %d and it is not a palindrome\n",z,R);
    return 0;
}