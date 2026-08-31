#include <stdio.h>

int main()
{
    int i, n, x;
    int p = 0, ng = 0, z = 0;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &x);

        if(x > 0)
            p++;
        else if(x < 0)
            ng++;
        else
            z++;
    }

    printf("\nPositive = %d", p);
    printf("\nNegative = %d", ng);
    printf("\nZero = %d", z);

    return 0;
}
