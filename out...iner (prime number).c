#include<stdio.h>
void main()
{
    int n,j;
    for(n=1;n<=100;n++)
    {
        for(j=2;j<=n-1;j++)
        {
            if(n%j==0)
            {
                //printf("%d Not Prime\n",j);
                break;
            }
        }

        if(n==j)
        {
           printf("%d is Prime Number\n",j);
        }
    }
}
