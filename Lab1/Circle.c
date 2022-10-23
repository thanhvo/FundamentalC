// circle.c
#include <stdio.h>

int main() {
  const float PI = 3.14;
  int radius;
  float circumference;

  printf("Enter the radius: "); // prompt
  scanf("%d", &radius); // read an integer

  circumference = 2 * PI * radius;
  
  printf("Circumference: %f\n", circumference);
}