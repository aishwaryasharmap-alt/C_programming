

#include <stdio.h>

int main()
{  
    int n,c=0,i;
    printf("Input the value of n");
    scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       if(n%i==0)
       c++;
   }
   if(c==2)
   {
       printf("It is a Prime number");
   }
   else
   {
       printf("It is not a Prime number");
   }
     
    return 0;
}
