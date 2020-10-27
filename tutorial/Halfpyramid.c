#include <stdio.h>
int main() {
   int i, j, numberofRows;
   printf("Plese enter the number of rows: ");
   scanf("%d", &numberofRows);
   for (i = 1; i <= numberofRows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}
