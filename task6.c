#include <stdio.h>
int main(int argc, char const *argv[]) {
    int dividend, divisor, quotient, remainder;

    printf("Введите делимое: ");
    scanf("%d", &dividend );

    printf("Введите делитель: ");
    scanf("%d", &divisor);

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    printf("частное = %d\n", quotient);
    printf("остаток = %d\n",remainder );

    return 0;
}
