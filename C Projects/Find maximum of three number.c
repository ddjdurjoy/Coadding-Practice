#include<stdio.h>
int main(){
    int a,b,c;
    printf("Type Digit : ");
        scanf("%d",&a);
    printf("\nType Digit : ");
        scanf("%d",&b);
    printf("\nType Digit : ");
        scanf("%d",&c);

        if(a>b&&a>c){
            printf("\n%d\n",a);
        }
        else if(a<b&&c<b){
            printf("\n%d\n",b);
        }
        else if(c>a&&c>b){
            printf("\n%d\n",c);
        }
        else{
            printf("\nThere is no Maximum..\n");
        }

return 0;
}
