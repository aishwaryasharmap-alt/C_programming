// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main()
{
    int l , w , area, perimeter;
    printf("Enter the Length of the rectangle");
    scanf("%d",&l);
    printf("Enter the width of the rectangle");
    scanf("%d",&w);
    area = l*w;
    perimeter = 2*(l+w);
    printf("\nThe area of the rectangle is %d",area);
    printf("\nThe perimeter of the rectangle is %d", perimeter);

 return 0;
}
