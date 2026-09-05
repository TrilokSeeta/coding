#include <stdio.h>

int main()
{
    int n;
    int r;
    int sum = 0;
    int x;
    printf("Enter the number:  ");
    scanf("%d", &n);
    x = n;
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        int fact = 1;
        int i = 1;
        while (i <= r)
        {
            fact = fact * i;
            i++;
        }
        sum = sum + fact;
    }
    if (x == sum)
        printf("%d is a strong number",x);
    else
        printf("%d is not strong number",x);
    return 0;
}