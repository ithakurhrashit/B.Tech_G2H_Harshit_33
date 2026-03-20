#include<stdio.h>
int main(){
    int a[5],largest,temp;
    for(int i=0 ; i<5; i++){
        printf(" enter %delement of array",i);
        scanf("%d",&a[i]);
    }
    for(int j=0; j<5 ; j++){
        if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            
        }
    }
   printf(" the largest is %d ", a[4]);
    return 0 ;
}
