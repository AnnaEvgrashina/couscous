#include <stdio.h>
int main(int argc, char const *argv[]) {
   double A, B, temp;
   printf("введите A: ");
   scanf("%lf",&A);
   printf("Введите B: ");
   scanf("%lf",&B);
   temp = A;
   A = B;
   B = temp;
   printf("A = %.2lf\n", A);
   printf("B = %.2lf\n", B);
  return 0;
}
