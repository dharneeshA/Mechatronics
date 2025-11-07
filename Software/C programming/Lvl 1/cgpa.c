#include<stdio.h>
int main()
{
    float percent,cgpa;
    scanf("%f",&percent);

    cgpa=percent/9.5;
    printf("CGPA=%0.1f\n",cgpa);
    if(cgpa>=9)
    {
        printf("excellent");
    }
    else if(cgpa>=7.5 && cgpa<9)
    {
        printf("good");
    }
    else if(cgpa<7.5)
    {
        printf("poor");
    }
    else{
        printf("invalid");
    }
    return 0;
}