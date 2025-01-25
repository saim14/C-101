#include <stdio.h>

int main(){
    int r;
    float Circumference, Area;
    printf("Enter radius value: ");
    scanf("%d", &r);
    Circumference = 2 * 3.1416 * r;
    Area = 3.1416 * r * r;
    printf("Circumference: %f \nArea: %f", Circumference, Area);
    return 0;
}
