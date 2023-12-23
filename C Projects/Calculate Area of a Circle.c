#include<stdio.h>
int main(){
    float a, pi, r;
    pi=3.14159;
    printf("Type Radius Value =");
    scanf("%f", &r);
    a=pi*r*r;
    printf("Area of This Circle = %.2f", a);
return 0;
}
