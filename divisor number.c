#include<stdio.h>
void main()
{
    int n,j;
    for(n=2;n<=100;n++)
    {
        for(j=1;j<=n;j++)
        {
            if(n%j==0)
            {
                printf("%d 's divisor is: %d\n",n,j);
            }
        }
    }
}
