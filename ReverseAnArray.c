#include<stdio.h>
int main(){
    int a[5],x,j,temp;
    for(int i=0 ; i<5; i++){
        printf(" enter %delement of array",i);
        scanf("%d",&a[i]);
    }
    for(x=0,j=5-1;x<j;x++,j--){
        temp=a[x];
        a[x]=a[j];
        a[j]=temp;
    }
    printf("reversed array is :");
    for( int y=0;y<5;y++){
        printf(" %d ", a[ y ] );
    }
    return 0;
}
