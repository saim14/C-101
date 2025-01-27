#include<stdio.h>

int main(){
     double a,b,sum,product;
     printf("Enter two numbers separated by space: \n");
     scanf("%lf %lf", &a, &b);
     sum = a+b;
     product = a*b;

     printf("\nSum: %lf", sum);
     printf("\nProduct: %lf\n", product);

     return 0;
}
