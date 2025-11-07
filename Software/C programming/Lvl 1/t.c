#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a>0 && b>0 && c>0)
    {
        if(a+b+c==180)
        {
             printf("Valid triangle");
             if(a==b  && b==c && c==a)
             {
                printf("equilateral");
             }

            else if(a==b || b==c || c==a)
            {
                printf("isoceles");
            }
            else if(a!=b && b!=c && c!=a)
            {
                printf("scalene");
            }
            
        }
 else 
 {
        printf("Invalid triangle");
    } 
}
    return 0;
}
