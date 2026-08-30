#include <stdio.h>

int main()
{
    int n, b[20], i = 0;
    printf("Input the value of n");
    scanf("%d", &n);

    while(n > 0)
    {
        b[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("The binary is :");
    while(i > 0)
    {
        i--;
        printf(" %d", b[i]);
    }

    return 0;
}
