#include <stdio.h>

int main() {
    int rows = 5;

    for(int i = rows; i >= 1; i--) {         
        // Print spaces
        for(int s = 1; s < i; s++) {
            printf(" ");
        }
        // Print numbers
        for(int j = i; j <= rows; j++) {
            printf("%d", j);
        }

    }

    return 0;
}