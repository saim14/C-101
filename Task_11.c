#include<stdio.h>

int main(){
    float a,b,c,d,e;
    printf("Enter five numbers separated by space: ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    printf("Average of them are: %f\n", (a+b+c+d+e)/5);
    return 0;
}
