//C program to calculate Simple Interest

#include <stdio.h>

int main() {
    double p, t, r, i;

    printf("Type The Principle = ");
    scanf("%lf",&p);
    printf("Type Time = ");
    scanf("%lf",&t);
    printf("Type Interest Rate = ");
    scanf("%lf",&r);
    i=p*t*r/100;
    printf("Your Intersest is %lf..",i);

    return 0;
}
