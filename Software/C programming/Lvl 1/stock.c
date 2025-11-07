#include<stdio.h>
int main()
{
    float buyprice,sellprice,profit,loss;
    scanf("%f%f",&buyprice,&sellprice);

    if(sellprice>buyprice)
    {
        profit=sellprice-buyprice;
        printf("Status:profit\n");
        printf("profit= %0.0f",profit);
    }
    else if(sellprice<buyprice)
    {
        loss=buyprice-sellprice;
        printf("Status:loss\n");
        printf("loss=%0.0f",loss);
    }
    else{
        printf("no profit no loss");
    }
    return 0;
}