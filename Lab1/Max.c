#include <stdio.h>

int main() {
  int first, second, max;
  
  printf("Enter the first number: ");
  scanf("%d", &first);

  printf("Enter the second number: ");
  scanf("%d", &second);

  if (first > second) {
    max = first;
  } else {
    max = second;
  }
  
  printf("Max: %d\n", max);

  return 0;
}