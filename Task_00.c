#include<stdio.h>

int main(){
     double a,b,sum,product;
     print("Enter two numbers separated by commas: \n");
     scanf("%lf %lf", &a, &b);
     sum = a+b;
     product = a*b;

     print("\nSum: %lf", sum);
     print("\nProduct: %lf", product);

     return 0;
}
