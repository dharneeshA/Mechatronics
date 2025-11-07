#include<stdio.h>
int main()
{
    float weight,height,bmi;
    scanf("%f%f",&weight,&height);

    bmi=weight/(height*height);

    printf("%0.1f is your bmi\n",bmi);

    if(bmi<18.5)
    {
        printf("you are underweight");
    }
    else if(bmi>=18.5 && bmi<24.9)
    {
        printf("normal weight");
    }
    else if(bmi>=24.9)
    {
        printf("obese");
    }
    return 0;

}