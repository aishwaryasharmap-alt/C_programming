#include <stdio.h>

int main() 
{
    int n;
    printf("Input a integer");
    scanf("%d", &n);

    if (n >= 0)
     {
        if (n == 0) 
        {
            printf(" The integer is Zero");
        } else {
            printf("The integer is Positive");
        }
    } else {
        printf("The integer is Negative");
    }

    return 0;
}
