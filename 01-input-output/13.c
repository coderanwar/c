#include <stdio.h>

int main() {
    int num1, num2, num3, sum, avg;

    printf("Enter three integer number: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    avg = sum / 3;

    printf("%d + %d + %d = %d\n", num1, num2, num3, sum);
    printf("Average is: %d\n", avg);
    
    return 0;
}
