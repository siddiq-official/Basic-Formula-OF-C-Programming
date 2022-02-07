#include<stdio.h>
void main()
{
    int i,j;
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(i==2&&j==1)
            {
                printf("s");
            }
            else
            {
                printf("*");
            }
        }
         printf("\n");
    }
}
