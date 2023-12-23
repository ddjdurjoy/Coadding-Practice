#include <stdio.h>

int main() {
    int l, w, a, p;
    printf("Type Length of Rectengular = ");
    scanf("%d",&l);
    printf("Type Width of Rectengular = ");
    scanf("%d",&w);
    a=l*w;
    p=2*l+2*w;
    printf("\n\nThe Area of this Rectengular is %d..\nThe Perimeter of this Rectengular is %d..",a,p);

    return 0;
}
