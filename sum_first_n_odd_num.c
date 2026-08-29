
#include <stdio.h>

int main()
 {
    int n ,s=0;
    printf("Input the value of n");
    scanf ("%d",&n);
    for( int i =1 ;i<=n;i++)
    {
       s=s+(2*i-1);
    }
     printf("The sum of odd num is %d ",s);

    return 0;
}
