#include <stdio.h>

int x = 10; 

void show()
{
    printf("\nInside the show(): %d", x);
}
void multiply()
{
    x=x*5;
    printf("\nInside the multiply() : %d",x);
}
void increment()
{
    x=++x;
    printf("\nInside the increment() : %d",x);
}
void decrement()
{
    x=--x;
    printf("\nInside the decrement() : %d",x);
    
}
void divide()
{
    x= x/10;
    printf("\nInside the divide() : %d",x);
    
}
int main()
{
    printf("\nInside the main() before calling all the function: %d", x);
    show();
    multiply();
    increment();
    decrement();
    divide();
    printf("\nVariable after calling all the function : %d",x);

    return 0;
}
