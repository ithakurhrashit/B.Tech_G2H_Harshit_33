// copy one array to another 
#include<stdio.h>
int main(){
    int n ;
    printf("enter the elements of array");
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++){
        printf("enter %d element of array" ,i );
        scanf(" %d",&a[i]);
        
    }
    for(int y=0 ; y<n ; y++){
        a[y]=b[y];
    }
    for(int x=0; x<n; x++){
    printf(" %d ", b[x]);
    }
    return 0;
}
