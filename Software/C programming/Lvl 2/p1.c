#include<stdio.h>
int main()
{
    int n,a=0,b=1,i,next;
    scanf("%d",&n);
    if(n>0){
    for(i=1;i<=n;i++){
        printf("%d",a);
        if(i!=n){
        printf(",");}
        next=a+b;
        a=b;
        b=next;
    }
    return 0;
}
else 
{
    printf("invalid");
}
}