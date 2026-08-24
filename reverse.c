

#include <stdio.h>

int main()
{  
    int n,r=0,d,i;
    printf("Input a number");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
        
    }
    printf("The reverse is : %d",r);
     
    return 0;
}
