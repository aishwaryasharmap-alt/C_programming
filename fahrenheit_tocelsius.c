 #include <stdio.h>
 int main()
 {
    double f,c;
    printf("Enter the fahrenheit temperature");
    scanf("%lf",&f);
    c= (f-32)/1.8;
    printf("The temp in celsius is : %lf",c);
 }
