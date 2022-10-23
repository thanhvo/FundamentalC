#include <stdio.h>

int main() {
  int days;

  printf("Enter the number of days: "); 
  scanf("%d", &days);

  printf("The years: %d\n", days / 365 + 1);
  printf("The weeks: %d\n", days / 7 + 1);

  return 0;
}