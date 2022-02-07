#include<stdio.h>
void main()
{
    int i,n;
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            printf("Not Prime\n");
            break;
        }
    }
    if(n==i)
    {
        printf("Prime\n");
    }
    main();
}
