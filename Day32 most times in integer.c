#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0};  
    int i, maxDigit, maxCount;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    if(num < 0) num = -num; 

    while(num > 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    maxDigit = 0;
    maxCount = count[0];
    for(i = 1; i < 10; i++) {
        if(count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Digit %d occurs the most (%d times).\n", maxDigit, maxCount);

    return 0;
}