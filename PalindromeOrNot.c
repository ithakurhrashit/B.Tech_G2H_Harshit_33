#include<stdio.h>
int main(){
    int N,y,R=0,n1;
    printf("enter number=");
    scanf("%d",&N);
    n1=N;
    while(N!=0){
        y=N%10;
        R=R*10+y;
        N=N/10;
    }
    if(R==n1){
        printf("no is palindrome");
        
    }
    else{printf("number is not palindrome");
}
return 0 ;
}
