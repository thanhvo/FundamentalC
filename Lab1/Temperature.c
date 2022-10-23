#include <stdio.h>

int main() {
  float degrees;

  printf("Enter the temperature of in Celsius: "); 
  scanf("%float", &degrees);

  printf("The temperature in Fehrenheit: %f\n", degrees * 9.0 / 5.0 + 32);

  return 0;
}