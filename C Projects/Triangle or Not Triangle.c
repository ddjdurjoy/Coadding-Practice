#include<stdio.h>

int main(){
float a, b, c;
printf("Side 1=");
scanf("%f",&a);
printf("Side 2=");
scanf("%f",&b);
printf("Side 3=");
scanf("%f",&c);

((a||b||c)!=0 && (a+b)>c && (b+c)>a && (a+c)>b)? printf("Triangle"):printf("Not Triangle");

return 0;
}
