#include<stdio.h>
int main()
{
    char gender;
    float salary,bonus,total;
    scanf("%c",&gender);
    scanf("%f",&salary);
    if(gender=='M')
    {
        bonus=salary*0.05;
    }
    else if(gender=='F')
    {
        bonus=salary*0.10;
    }
    else
    {
        printf("invalid gender");
        return 0;
    }

    if(salary<10000)
    {
        bonus+=salary*0.02;
    }
    total=salary+bonus;
    printf("%f",total);

    return 0;
}