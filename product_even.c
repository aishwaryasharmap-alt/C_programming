#include <stdio.h>

int main()
{
    int n, i, p = 1;
    printf("Input the value of n");
    scanf("%d", &n);

    for(i = 2; i <= n; i = i + 2)
    {
        p = p * i;
    }

    printf("The product of even numbers is %d", p);

    return 0;
}
