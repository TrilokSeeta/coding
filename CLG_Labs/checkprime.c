#include <stdio.h>

int main()
{

    int n;
    int P=0;
    int C=0;
    do
    {
        int flag = 1;
        int i = 2;
        printf("Enter the number:  ");
        scanf("%d", &n);
        if (n == -1)
            break;
        if (n == 1 || n == 0)
        {
            continue;
        }
        if (n == 2)
        {
            P=P+1;
            continue;
        }
        while (i < n)
        {
            if (n % i == 0)
            {
                flag = 0;
                C=C+1;
                break;
            }
            i++;
        }
        if (flag == 1)
            P=P+1;
    } while (n != -1);
    printf("Number of prime numbers entered is %d\n",P);
    printf("Number of composite numbers entered is %d\n",C);
    return 0;
}