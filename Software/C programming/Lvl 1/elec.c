#include<stdio.h>
int main()
{
    int u;
    float b,s,t;
    scanf("%d",&u);
    if(u<=50)
    {
        b=u*0.50;

    }
    else if( u<=150)
    {
        b=(50*0.50)+((u-50)*0.75);
    }
    else if( u<=250)
    {
        b=(50*0.5)+(100*0.75)+((u-150)*1.20);
    }
    else if(u>250)
    {
        b=(50*0.5)+(100*0.75)+(100*1.20)+((u-250)*1.5);
    }
    else
    {
        printf("invalid");
    }

    printf("beforesurcharge=%.2f\n",b);
    s=b*0.20;
    printf("surcharge=%.2f\n",s);
    t=b+s;
    printf("total=%.2f\n",t);
    return 0;
}