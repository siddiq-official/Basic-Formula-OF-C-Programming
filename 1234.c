#include<stdio.h>
void main()
{
    int a,b;
    scanf("%d",&a);
    for(;a!=0;)
    {
        b=a%10;
        a=a/10;
        if(b%2==1)
        {
            printf("%d is odd\n",b);
        }
        else
        {
            printf("%d is even\n",b);
        }
    }
}
