#include <stdio.h>
int main () {
    float r,volume,area;
    printf("enter the value of radious: ");
    scanf("%f",&r);
    volume=(4*3.14*r*r*r)/3;
    area=(4*3.14*r*r);
    printf("volume is %0.2f\n",volume);
    printf("area is %0.3f\n",area);
    return 0;
}
