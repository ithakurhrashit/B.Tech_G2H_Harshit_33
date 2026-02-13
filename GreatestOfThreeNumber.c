#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("enter three numbers");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b){
        if(a>c){
            printf(" first is the greatest");
        }
        else {
            printf(" third is the greatest");
        }
    }
    else {
        if(b>c){
            printf(" second is the greatest");
        }
        else {
            printf("third is greatest");
        }
    }
    return 0;

}
