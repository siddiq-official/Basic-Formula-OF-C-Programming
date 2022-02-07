#include<stdio.h>
void main()
{
    int i,a[5],max=-10000;
    for(i=0;i<=4;i++)
    {
        printf("Enter Your Number: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d is Maximum Number",max);
}
