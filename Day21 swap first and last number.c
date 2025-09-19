#include <stdio.h>

int main() {
    int num, first, last, digits = 0, temp, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;  

    while(temp >= 10) {
        temp = temp / 10;
        digits++;
    }
    first = temp;  

    temp = num % (int)1;
    int factor = 1;
    for(int i = 0; i < digits - 1; i++) factor *= 10;
    temp = (num % factor) / 10; 

    swappedNum = last;
    for(int i = 0; i < digits; i++) swappedNum *= 10;
    swappedNum += temp * 10 + first;

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}