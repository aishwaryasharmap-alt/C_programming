 // Online C compiler to run C program online
#include <stdio.h>

int main() {
    // A program to build a simple calculator using switch case
    char choice;
    int x,y,z;
    printf("\n\t\t\t\t\t\t Simple Calculator");
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\nEnter two numbers for calculation:");
    scanf("%d%d",&x,&y);
    printf("\n Enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            z=x+y;
            printf("The addition is : %d",z);
            break;
        }
         case 2:
        {
            z=x-y;
            printf("The subtraction is : %d",z);
            break;
        }
         case 3:
        {
            z=x*y;
            printf("The multiplication is : %d",z);
            break;
        }
         case 4:
        {
            z=x/y;
            printf("The division is : %d",z);
            break;
        }
         default:
        {
            printf("Enter a valid choice");
        }
        return 0;
    }


    return 0;
}
