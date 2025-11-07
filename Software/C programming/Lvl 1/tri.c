#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);

    if((a>0 && b>0 && c>0) && (a+b>c && b+c>a && c+a>b))
    {
        
         if(a==b && b==c && c==a)
         {
            printf("its an equilateral trianlge");
        }
        else if(a==b || b==c || c==a)
        {
            printf("it is an isoceles triangle");
        }
        else if(a!=b && b!=c && c!=a)
        {
            printf("its a scalar trianlge");
        }
        else
        {
            printf("invalid  triangle");
            return 0;
            
        }
    }    
    else 
    {
        printf("invalid triangle");
    }  
    return 0;  
    }
