#include <stdio.h>
#include "sum.c"
#include "sub.c"

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int result_sum = sum(num1, num2);
    int result_subtract = subtract(num1, num2);

    printf("Sum: %d\n", result_sum);
    printf("Subtraction: %d\n", result_subtract);

    return 0;
}