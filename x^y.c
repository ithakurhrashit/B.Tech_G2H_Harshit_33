#include<stdio.h>
int main(){
    int n,power,result=1;
    printf("enyter the number");
    scanf("%d",&n);
    printf("enter the power");
    scanf("%d",&power);
    for(int i=0 ; i<power; i++){
        
        result=result*n;
    }
    printf("%d raised to power %d is : %d",n,power,result);
    return 0 ;
}
