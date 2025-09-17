#include <stdio.h>

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n >= 0) {
        if (n == 0)
            printf("Number is Zero\n");
        else
            printf("Number is Positive\n");
    } else {
        printf("Number is Negative\n");
    }

    return 0;
}