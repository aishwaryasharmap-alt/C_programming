  // Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>
int main ()
{
    int x;
    printf("Input a year");
    scanf("%d",&x);
   if ((x % 400 == 0) || (x % 4 == 0 && x % 100 != 0))
    {
        printf("This is a leap year");
    }
    else 
    {
        printf("This is not a leap year");
    }
}
