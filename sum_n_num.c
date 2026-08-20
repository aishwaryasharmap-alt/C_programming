 // Write a program to find and display the sum of the first n natural numbers.
 #include <stdio.h>
 int main ()
 {
    int x,i,s=0;
    printf("Input the value for n");
    scanf("%d",&x);
    for(i=0;i<=x;i++)
    {
        s = s+i;
    }
    printf("The sum of n numbers is : %d",s);
 }

