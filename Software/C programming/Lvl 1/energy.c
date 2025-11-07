#include<stdio.h>
int main()
{
    float mass,velocity,height,g=9.8,KE,PE;
    scanf("%f%f%f",&mass,&velocity,&height);

    KE=0.5*mass*velocity*velocity;
    PE=mass*g*height;
    printf("%0.1f joules\n",KE);
    printf("%0.1f joules\n",PE);

    return 0;
}