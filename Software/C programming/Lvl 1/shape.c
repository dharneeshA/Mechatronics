#include<stdio.h>
int main()
{
    float a,b;
    scanf("%f%f",&a,&b);
    if(a>0 && b>0)
    {
    if(a==b)
    {
        printf("square");
    }
    else if(a!=b)
    {
        printf("rectangle");
    }
    printf("\nArea:%0.1f",a*b);
    }
    else{
        printf("invalid");
    }
    

    return 0;
}