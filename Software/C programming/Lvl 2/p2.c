#include<stdio.h>
int main()
{
    int n,add=0,sum=0,i,j;
    scanf("%d",&n);
    for(i=n+1;sum<5;i++)
    {
     add=0;
     for(j=2;j<i;j++)   
     {
        if(i%j==0)
        {
            add++;
            break;
        }
     }
     if (add==0)
     {
     printf("%d ",i);
     sum++;
     }
    }
    return 0;
}