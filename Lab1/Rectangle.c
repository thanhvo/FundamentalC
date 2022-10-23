#include <stdio.h>

int main() {
  const float width = 5.0;
  float height;
  
  printf("Enter the height: ");
  scanf("%f", &height);

  float perimeter = 2 * (width + height);
  float area = width * height;
  
  printf("Perimeter: %f\n", perimeter);
  printf("Area: %f\n", area);

  return 0;
}