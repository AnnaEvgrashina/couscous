#include <stdio.h>
int main(int argc, char const *argv[]) {
    char character;
    printf("Введите символ: ");
    scanf("%c", &character);
    printf("ASCII %c = %d\n", character, character);
    return 0;
}
