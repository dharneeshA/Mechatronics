#include<stdio.h>
int main()
{
    int rt,nt,hr,min,hr1,min1;
    scanf("%d",&rt);
    hr=rt/100;
    min=rt%100;
    
    if(hr==0)
    {
        printf("normal time=12:00 AM");
    }
    else if(hr==12)
    {
        printf("normal time=12:%0.2d PM",min);
    }
    else if(hr<12)
    {
        printf("normal time=%d:%0.2d AM",hr,min);
    }
    else if(hr>12 && hr<24)
    {
        hr1=hr-12;
        min1=min;
        printf("normal time=%0.2d:%0.2d PM",hr1,min1);
    }
    else if(hr>=24 || min>=60)
    {
        printf("invalid");
    }
    else
    {
        printf("invalid");
    }

     
    return 0;

}
   