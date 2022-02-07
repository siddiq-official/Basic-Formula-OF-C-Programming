#include<stdio.h>
void main()
{
    int i,sum1=0,sum2=0;
    for(i=1;i<=10;i++)
    {
         if(i%2!=0)
         {
             sum1=sum1+i;
         }
         else
         {
            sum2=sum2+i;
         }
    }
    printf("Sum of even number is: %d\n",sum2);
    printf("Sum of odd number is: %d",sum1);
}
