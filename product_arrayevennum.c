#include <stdio.h>

int main()
{
    int n, i, p = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            p = p * i;
        }
    }

    printf("Product = %d", p);

    return 0;
}
