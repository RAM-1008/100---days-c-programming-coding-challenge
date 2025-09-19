#include <stdio.h>

int main() {
    int num, product = 1, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        remainder = num % 10;
        if(remainder % 2 != 0) {
            product = product * remainder;
        }
        num = num / 10;
    }

    printf("Product of odd digits is: %d\n", product);

    return 0;
}