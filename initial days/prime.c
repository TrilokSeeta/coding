#include <stdio.h>

int main()
{
    int n, prime;
    prime = 0;
    scanf("%d", &n);
    if (n == 0 || n == 1)
        printf("%d is not prime", n);
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0 && n != 2)
            {
                prime = 1;
                break;
            }
        }

        if (prime == 1)
        {
            printf("%d is not prime", n);
        }
        else
            printf("%d is prime", n);
    }
    return 0;
}