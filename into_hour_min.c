 // Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main ()
{
    int t,h,m,s;
    printf("Input the time to convert");
    scanf("%d",&t);
    h = t/ 3600;
    m= (t % 3600) / 60;
    s = t % 60;
      printf("\n In hour %d",h);
      printf("\n In min %d",m);
      printf("\n Im seconds %d",s);



}
