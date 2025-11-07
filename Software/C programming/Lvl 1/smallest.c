#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
    {
        printf("c is the s");
    }
    if(b>a&& b>c)
    {
        printf("b is the s");
    }
    if(c>b&& c>a)
    {
        printf("a is the s");
    }
    return 0;
}
