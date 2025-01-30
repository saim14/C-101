#include<stdio.h>

int main(){
    int a,b,c,d,e;
    printf("Enter five numbers separated by space: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if(a%2==0){
        printf("%d is even\n", a);
    }
    else{
        printf("%d is odd\n", a);
    }

    if(b%2==0){
        printf("%d is even\n", b);
    }
    else{
        printf("%d is odd\n", b);
    }

    if(c%2==0){
        printf("%d is even\n", c);
    }
    else{
        printf("%d is odd\n", c);
    }

    if(d%2==0){
        printf("%d is even\n", d);
    }
    else{
        printf("%d is odd\n", d);
    }

    if(e%2==0){
        printf("%d is even\n", e);
    }
    else{
        printf("%d is odd\n", e);
    }
    return 0;
}
