#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    int a[100];

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        a[i] = 2 * i - 1;
        sum = sum + a[i];
    }

    printf("Sum = %d", sum);

    return 0;
}
