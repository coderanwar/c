#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    if (n > 0) {
        printf("The number is positive\n");
    } else if (n < 0) {
        printf("The number is negative\n");
    } else if (n==0){
        printf("I am zero\n");
    }

    return 0;
}
