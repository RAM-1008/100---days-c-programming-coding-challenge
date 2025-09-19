#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        sum += (2.0*(i+1)) / (4.0*i + 3);  
    }

    printf("Sum of the series: %.4lf\n", sum);

    return 0;
}