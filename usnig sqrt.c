#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,flag=0;
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            printf("Not Prime\n");
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
       printf("Prime\n");
    }
    main();

}
