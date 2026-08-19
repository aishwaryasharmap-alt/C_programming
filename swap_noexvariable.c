 #include <stdio.h>
 int main ()
 {
    int a,b;
    printf("Input two numbers");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping a is : %d",a);
     printf("\nAfter swapping bis : %d",b);
     return 0;
 }