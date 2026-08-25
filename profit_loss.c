#include <stdio.h>

int main()
{
    float cp, sp, p;
    printf("Input Cost Price");
    scanf("%f",&cp);
    printf("\nInput selling price");
     scanf("%f",&sp);
    if (sp > cp)
    {
        p = ((sp - cp) / cp) * 100;
        printf("Profit %f", p);
    }
    else if (cp > sp)
    {
        p = ((cp - sp) / cp) * 100;
        printf("Loss %f", p);
    }
    else
    {
        printf("No Profit No Loss");
    }

    return 0;
}
