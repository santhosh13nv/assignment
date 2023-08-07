#include <stdio.h>

int main() {
   int N;
   printf("Enter the value of N: ");
   scanf("%d", &N);

   int sum = 0;

   for (int i = 2; i <= 2 * N; i += 2) {
      sum += i * i;
   }

   printf("Sum of squares of the first %d even numbers is %d\n", N, sum);

   return 0;
}
