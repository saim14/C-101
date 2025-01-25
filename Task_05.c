#include <stdio.h>

int main(){
    int a, b;
    printf("Please enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(a>b){
        printf("First is greater.");
    }
    else{
        printf("First is not greater.");
    }

    return 0;
}
