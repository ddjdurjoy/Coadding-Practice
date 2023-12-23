#include <stdio.h>

int main() {
    int f, s, t, sum;
    printf("Type 1st Side of Triangle = ");
    scanf("%d",&f);
    printf("Type 2nd Side of Triangle = ");
    scanf("%d",&s);
    sum=f+s;
    const int a=180;
    t=a-sum;
    printf("\n\n3rd Side of this Triangle is %d..",t);

    return 0;
}
