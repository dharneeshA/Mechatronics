#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    if((a+b>c)&&(b+c>a)&&(a+c>b))
    {
        if(a==b&&b==c)
        {
            printf("equilateral");
        }
        else if(a==b||b==c||c==a)
        {
            printf("isoceles");
        }
        else
        {
            printf("scalene");
            return 0;
        }
    }
        else
        {
            printf("invalid");
        }
    
    
    return 0;
}