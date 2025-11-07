#include<stdio.h>
int main()
{
    float Sbase,Sbonus,Sallowance,E,Stotal,S,P;
    scanf("%f",&Sbase);
    scanf("%f",&Sbonus);
    scanf("%f",&Sallowance);
    scanf("%f",E);
    Stotal=Sbase+Sallowance+Sbonus;
    S=Stotal-E;
    if(Stotal!=0)
    {
       P=(S/Stotal)*100; 
    }
    else{
        P=0;
    }
    printf("Total Salary:%0.2f",Stotal);
    printf("Expediture:%0.2f",E);
    printf("Savings:%0.2f",S);
    printf("saving percentage:%0.2f%%",P);
    
    
    return 0;
}