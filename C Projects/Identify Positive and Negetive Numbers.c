//Indentify Positive and Negetive Numbers..

#include<stdio.h>
int main(){

    int a;
    printf("Type a Digit=");
    scanf("%d", &a);

    if(a<0){
        printf("%d is a Negetive Number..", a);
    }

    else if(a==0){
        printf("%d is a Positive Number..", a);
    }

    else{
        printf("%d is a Positive Number..", a);
    }

return 0;
}
