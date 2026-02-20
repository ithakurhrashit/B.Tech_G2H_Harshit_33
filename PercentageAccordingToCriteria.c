#include<stdio.h>
int main(){
    int hindi,maths,english,science,sst,percentage;
    printf("enter the marks of hindi");
    scanf("%d",&hindi);
    printf("enter the marks of maths");
    scanf("%d",&maths);
    printf("enter the marks of english");
    scanf("%d",&english);
    printf("enter the marks of science");
    scanf("%d",&science);
    printf("enter the marks of sst");
    scanf("%d",&sst);

    percentage = (hindi+maths+english+science+sst)/5;
    
    if(percentage>=90){
        printf("grade is A");
    }
    if(percentage>=80 && percentage<90){
        printf("grade is B");
    }
    if(percentage>=70 && percentage<80){
        printf("grade is C");
    }
    if(percentage>=60 && percentage<70){
        printf("grade D");
    }
    if(percentage<60){
        printf("tu padhai chor de");
    }
    return 0 ;


}