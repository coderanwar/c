#include <stdio.h>
int main (){
    float base,height,area;
    printf("Enter the value of base: ");
    scanf("%f",&base );
    printf("Enter the value of height: ");
    scanf("%f",&height);
    area=(base*height)/2;
    printf("%0.0f \n",area);
    return 0;
}
