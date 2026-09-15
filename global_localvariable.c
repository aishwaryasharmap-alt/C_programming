#include <stdio.h>

int x = 20; 

void multiply()
{
    int y = 5;   
    printf("Local variable for multiplication = %d\n",y);
    printf("Multiplication of local and global variable = %d\n", x * y);
}

void divide()
{
    int z = 4;  
    printf("Local variable for division = %d\n",z);
    printf("Division of global and local variable = %d\n", x / z);
}

void change()
{
    x++;  
    printf("After increment of global variable = %d\n", x);

    x--;  
    printf("After decrement of global variable = %d\n", x);
}

int main()
{
    printf("Global variable = %d\n", x);
    multiply();
    divide();
    change();

    return 0;
}
