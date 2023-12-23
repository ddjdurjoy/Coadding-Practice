#include<stdio.h>
int main(){
int a;
printf("Type Any Digit=");
scanf("%d", &a);
if(a%2==0){
    printf("%d Even Number..", a);
}
else{
    printf("%d Odd Number..", a);
}
return 0;
}
