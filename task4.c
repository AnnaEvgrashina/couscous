#include <stdio.h>
int main(int argc, char const *argv[]) {
    double firstNumber, secondNumber, product;
    printf("Введите два числа: ");
    scanf("%lf %lf", &firstNumber, &secondNumber);
    product = firstNumber * secondNumber;
    printf("%.2lf * %.2lf = %.2lf\n", firstNumber, secondNumber, product);
    return 0;
}
