#include<stdio.h>
int main()
{
    int y;
    scanf("%d",&y);
if(y>1)
{
    if(y%4==0 && y%400==0  )
    {
        printf("leap year");
    }
    else if(y%100==0)
    {
          printf("not a leap year");
    }
    else{
        printf("not a leap year");
    }
}
else
{
    printf("not a valid number");
}
    return 0;
}
