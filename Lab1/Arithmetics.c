#include <stdio.h>

int main() {
  int first;
  int second;
  float circumference;

  printf("Enter the first number: "); 
  scanf("%d", &first);

  printf("Enter the second number: "); 
  scanf("%d", &second); 
  
  printf("Addition: %d\n", first + second);
  printf("Subtraction: %d\n", first - second);
  printf("Multiplication: %d\n", first * second);
  printf("Division: %d\n", first / second);
  printf("Remainder: %d\n", first % second);

  return 0;
}