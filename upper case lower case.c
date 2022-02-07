#include<stdio.h>
void main()
{
    char a;
    printf("Press Your Letter\n");
    scanf("%c",&a);
    if(a>=65 && a<=90)
    {
        printf("upper case\n");
    }
    else if(a>=97 && a<=122)
    {
        printf("lower case\n");
    }
    else
    {
        printf("It is Not Letter\n");
    }
    //main();

}
