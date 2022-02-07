#include<stdio.h>
int fuction_x (int a)
{
    int b;
    b=a*a;
    return b;
}
void main()
{
    int x=5,c;
    c= fuction_x (x);
    printf("%d",c);
}
