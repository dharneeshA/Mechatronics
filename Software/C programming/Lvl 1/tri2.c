#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);

    if( a+b+c!=180)
    {
        printf("invalid triangle");
    }
    else 
        {
        if(a<90 && b<90 && c<90)
        {
        printf("acute triangle");
        }
         else if(a==90||b==90||c==90)
         {
            printf("right triangle");
         }
         else if(a>90 || b>90 || c>90)
         
            printf("obtuse triangle");
            return 0;
         }
         return 0;
        }


    
