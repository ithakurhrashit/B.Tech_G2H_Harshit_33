#include<stdio.h>
int main(){
    int a[5],sum=0;
    for(int i=0 ; i<5; i++){
        printf(" enter %delement of array",i);
        scanf("%d",&a[i]);
    }
    for(int j=0;j<5;j++){
        sum=sum+a[j];
    }
    printf("the sum of elements of aray is : %d",sum);
    return 0 ;
}
