#include <stdio.h>

int main()
{
    int n, x, d, s = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    x = n;

    while(n > 0)
    {
        d = n % 10;
        s = s + d * d * d;
        n = n / 10;
    }

    if(x == s)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}
