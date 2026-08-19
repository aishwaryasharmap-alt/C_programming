 #include <stdio.h> 
 int main ()
 {
    int a,b, c;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter swapping a is : %d",a);
    printf("\nAfter swapping b is : %d",b);
    return 0;
    
 }