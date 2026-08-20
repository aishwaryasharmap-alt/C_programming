 //Write a program to calculate simple and compound interest for given principal, rate, and time.
 #include <stdio.h>
 #include <math.h>
 int main ()
 {
    double p,r,t,si,ci,a;
    printf("Input the principle amount");
    scanf("%lf",&p);
    printf("Input the rate of interest");
    scanf("%lf",&r);
    printf("Input the period of time ");
    scanf("%lf",&t);
    si=(p*r*t)/100;
    a = p* pow(1 + r / 100, t);
    ci = a - p;
    printf("\nThe simple interest is : %lf",si);
     printf("\nThe compound interest is : %lf",ci);
     return 0;


 }
