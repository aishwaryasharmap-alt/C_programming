 // Write a program to calculate the area and circumference of a circle given its radius.
 #include <stdio.h>
    int main ()
    {
        double r, area, c;
        
        printf("Enter the radius of the circle");
        scanf("%lf",&r);
        area= 3.14*r*r;
        c= 2*3.14*r;
        printf("\nThe area of the circle is : %lf",area);
        printf("\nThe circumference of the circle is: %lf", c);

        return 0;
    }

