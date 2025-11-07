#include <stdio.h>

int main() {
    int a,b,c;
    float d;
    scanf(" %d%d%d",&a,&b,&c);
    
    d=b*b-4*a*c;
    if(d>0){
        printf("Real and distinct");
    }
    else if(d==0){
        printf("Real and equal");
    }
    else {
        printf("Imaginary");
    }
    
    return 0;
}