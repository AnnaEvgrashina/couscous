#include <stdio.h>
int main(int argc, char const *argv[]) {
    int firstNumber, secondNumber, sum;
    printf("Введите два целых числа: ");
    scanf("%d %d", &firstNumber, &secondNumber);
    sum = firstNumber + secondNumber;
    printf("%d + %d = %d\n", firstNumber, secondNumber, sum);
    return 0;
}
