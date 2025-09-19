#include <stdio.h>

int main() {
    long long binary;
    long long onesComplement = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while(binary != 0) {
        int digit = binary % 10;
        digit = 1 - digit;          
        onesComplement += digit * place;
        place *= 10;
        binary /= 10;
    }

    printf("1's complement is: %lld\n", onesComplement);

    return 0;
}