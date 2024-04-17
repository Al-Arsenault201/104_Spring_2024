#include <stdio.h>

int main() {
  int height;  // the height of a right triangle
  int base;  // the base of a right triangle
  float a;   // the area of a right triangle with height and base

  float calc_area (int height, int base);  // the function prototype

  printf ("Please enter the height and base of a right triangle, separated by a tab. \n");
  printf ("We will calculate the area of that triangle \n");
  scanf("%d%d", &height, &base);
  a = calc_area(height, base);
  printf("The area of your triangle is %1.4f \n", a);
  
  
  return 0;

}

    float calc_area (int height, int base) {
      float area;

      area = 0.5 * height * base;
      return area;

    }
