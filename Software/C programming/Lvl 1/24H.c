#include<stdio.h>
int main()
{
    int railway,hh,mm;
    scanf("%d",&railway);
    hh=railway/100;
    mm=railway%100;
    if(railway>2359 || railway<0 )
    {
        printf("Invalid Time");
    }
    else if(hh==12)
    {
        hh=12;
        printf("12H Time:%d:%02d PM",hh,mm);
    }
    else if(hh==0)
    {
        hh=12;
        printf("12H Time:%d:%02d AM",hh,mm);
    }
    else if(hh>12)
    {
        printf("12H Time:%d:%02d PM",hh-12,mm);
    }
    else 
    {
        printf("12H Time:%d:%02d AM",hh,mm);
    }
    return 0;


}