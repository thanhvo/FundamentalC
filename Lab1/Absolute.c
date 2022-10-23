#include <stdio.h>

int main() {
  float number;
  
  printf("Enter a number: ");
  scanf("%f", &number);

  float absolute;

  if (number > 0) {
    absolute = number;
  } else {
    absolute = -number;
  }
  
  printf("Absolute: %f\n", absolute);

  return 0;
}