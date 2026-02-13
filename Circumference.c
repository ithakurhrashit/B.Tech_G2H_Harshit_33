#include<stdio.h>
#include<math.h>
int main(){
    float r,c,a,pi=3.14;
    printf("enter radius :");
    scanf("%f",&r);

    c=2*pi*r;
    a=pi*r*r;

    printf("\nthe cirumference= %f",c);
    printf("\narea= %f",a );

    return 0;
}