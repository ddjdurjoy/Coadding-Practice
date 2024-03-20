#include <stdio.h>

int main(){
    int n,a=0,sum=0;
    printf("How many subject you want to calculate??\n");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d", &a);
        sum=sum+a;
    }
    printf("Total Result = %d",sum);
return 0;
}
