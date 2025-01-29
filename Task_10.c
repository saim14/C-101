#include<stdio.h>

int main(){
    int m;
    printf("Please enter your marks: ");
    scanf("%d", &m);
    if(m>=80 && m<=100){
        printf("Your grade is : 4.0\n");
    }
    else if(m>=75 && m<=79){
        printf("Your grade is : 3.75\n");
    }
    else if(m>=70 && m<=74){
        printf("Your grade is : 3.50\n");
    }
    else if(m>=65 && m<=69){
        printf("Your grade is : 3.25\n");
    }
    else if(m>=60 && m<=64){
        printf("Your grade is : 3.00\n");
    }
    else if(m>=55 && m<=59){
        printf("Your grade is : 2.75\n");
    }
    else if(m>=50 && m<=54){
        printf("Your grade is : 2.50\n");
    }
    else if(m>=45 && m<=49){
        printf("Your grade is : 2.25\n");
    }
    else if(m>=40 && m<=44){
        printf("Your grade is : 2.00\n");
    }
    else if(m>=0 && m<=39){
        printf("Your grade is : 0.00\n");
    }
    else{
        printf("Invalid Input.");
    }
    return 0;
}
