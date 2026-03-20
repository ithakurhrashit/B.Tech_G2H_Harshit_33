// Online C compiler to run C program online
#include <stdio.h>
int main(){
    int n , countodd=0,counteven=0;
    printf("enter the elements of array");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
     printf("enter %d element of array",i);
     scanf("%d",&a[i]);
    }
    for(int i=0; i<n ; i++){
        if(a[i]%2==0){
            counteven=counteven+1;
        }
        else{
            countodd=countodd+1;
        }
        
    }
    printf("even number of elements are: %d",counteven);
    printf("odd number of elements are: %d", countodd);


    return 0;
}
