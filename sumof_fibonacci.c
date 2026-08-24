

#include <stdio.h>

int main()
{  
    int n,i,a =1,b=1,c,s=2;
    printf("Input the value of n");
    scanf("%d",&n);
    printf("The fibonacci series is :");
    printf("%d",a);
    printf(" ");
    printf("%d",b);
    
    for (i=3;i<=n;i++)
    {

      c=a+b;
      printf(" %d",c);
      s=s+c;
      a=b;
      b=c;
       
    }
    printf("\nThe sum of fibonacci series is %d",s);
     
    return 0;
}
