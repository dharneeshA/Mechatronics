#include<stdio.h>
int main()
{
    float age,ticketcost,discount;
    scanf("%f",&age);

    //ordinary cost 
    ticketcost=500;

    if(age<=5)
    {
        discount=100;
        ticketcost=ticketcost*(1-discount/100);
        printf("DISCOUNT=100%%\nticketcost=%0.0f",ticketcost);
    }
     else if(age>5 && age<=15)
     {
        discount=50;
        ticketcost=ticketcost*(1-discount/100);
        printf("DISCOUNT=50%%\nticketcost=%f",ticketcost);
     }
     else if(age>15 && age<=60)
     {
        printf(" NO DISCOUNT\nticketcost=%f",ticketcost);
     }
     else if(age>60)
     {
        discount=25;
        ticketcost=ticketcost*(1-discount/100);
        printf("DISCOUNT=25%%\nticketcost=%f",ticketcost);
     }
    return 0;
}