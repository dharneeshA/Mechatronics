#include<stdio.h>
int main()
{
    char name[50];
    int age,gender;
    scanf("%s", name);
    scanf("%d", &age);
    scanf("%d", &gender);
    
    if(age>=18)
    {
        printf("Eligibility Status:Eligible\n");
    }
    else
    {
        printf("Eligibilty Status:Not Eligible\n");
    } 


    if(gender==1)
    {
        printf("salutations:Mr.%s\n",name);
    }
    else if(gender==2)
    {
        printf("Salutations:Ms.%s\n",name);
    }
    else
    {
        printf("salutations:%s\n",name);
    }
    return 0;
}