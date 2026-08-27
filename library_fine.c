#include <stdio.h>

int main()
{
    int d, f;
    printf("Input the number of days late");
    scanf("%d", &d);

    if (d> 30)
    {
        printf("Membership Cancelled");
    }
    else if (d <= 5)
    {
        f = d * 2;
        printf("Fine ₹%d", f);
    }
    else if (d <= 10)
    {
        f = (5 * 2) + (d - 5) * 4;
        printf("Fine ₹%d", f);
    }
    else
    {
        f= (5 * 2) + (5 * 4) + (d - 10) * 6;
        printf("Fine ₹%d", f);
    }

    return 0;
}
