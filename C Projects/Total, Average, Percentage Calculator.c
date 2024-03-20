#include<stdio.h>
int main(){
    float n, sum;
    float avg, percentage;
    printf("How Much subject you want to calculate?\n");
    scanf("%f",&n);
    for(int i=1; i<=n; i++){
        printf("\nType your %d subject number = ",i);
        int a;
        scanf("%d",&a);
        sum+=a;
    }
    int total=n*100;
    avg=sum/n;
    percentage=(sum/total)*100;
    printf("\n\nTotal = %2.f\nAverage = %2.f\nPercentage = %.2f\n",sum,avg,percentage);
return 0;
}
