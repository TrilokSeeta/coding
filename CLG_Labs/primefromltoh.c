#include <stdio.h>

int main()
{
    int L, H;

    printf("Enter the lower limit: ");
    scanf("%d", &L);
    printf("Enter the upper limit:  ");
    scanf("%d", &H);
    while (L <= H)
    {
        int flag = 1;
        int i = 2;
        while (i < L)
        {

            if (L % i == 0)
            {
                flag = 0;
                break;
            }
            i++;
        }
        if (flag == 1 || L==2)
            printf("%d   ", L);
        L++;
    }
    return 0;
}