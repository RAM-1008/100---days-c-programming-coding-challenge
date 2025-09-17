#include <stdio.h>

int main() {
    int length, breadth;

    printf("Enter length and breadth of rectangle: ");
    scanf("%d %d", &length, &breadth);

    printf("Area = %d\n", length * breadth);
    printf("Perimeter = %d\n", 2 * (length + breadth));

    return 0;
}