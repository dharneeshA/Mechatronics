#include<stdio.h>
#include<math.h>
int main()
{
    double p,r,a;
    int t;
    scanf("%lf%lf%d",&p,&r,&t);

    if (r>=!1&&r<=!8.5)
    {
    
       printf("invalid rate");
    
    }
    else if(p<1) 
    {
        
  printf("invalid principal amount");

    }
    else
    {
        a=p*pow((1+r/100),t);
  printf("A=%.2lf",a);
    
    }



    return 0;
}