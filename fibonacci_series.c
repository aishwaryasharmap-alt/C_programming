#include <stdio.h>

int main()
{  
    int n,i,a =1,b=1,c;
    printf("Input the value of n");
    scanf("%d",&n);
    printf("%d",a);
    printf("%d",b);
    for (i=3;i<=n;i++)
    {

      c=a+b;
      printf("%d",c);
      a=b;
      b=c;
       
    }
     
    return 0;
}
