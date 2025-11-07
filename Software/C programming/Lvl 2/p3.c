#include<stdio.h>
int main()
{
    int n,i,j,count=0;
    scanf("%d",&n);

    if(n<1)
    {
        printf("invalid");
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
             count++;
            
        }
        if(count==2)
        {
            printf("prime");
        }
        else{
            printf("composite");
        }
    }
    return 0;
}