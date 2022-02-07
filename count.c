#include<stdio.h>
void main()
{
    int i,n,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i+=2)
    {
        count++;
    }
        printf("%d\n",count);
}
