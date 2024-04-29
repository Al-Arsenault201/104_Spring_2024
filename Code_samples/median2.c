#include <stdio.h>

int main() {
  int grades [9];
  int median;
  int i, j, t;

  for (i = 0; i<9; i++) {
    printf("Enter the next grade: ");
    scanf("%d", &grades[i]);
  }

  // Now sort the array - a simple sort routine
  for (i = 0 ; i < 9 ; i++){
   for (j = 0 ; j < 9-i ; j++){
      if (grades[j] <= grades[j+1]){
         t = grades[j];
         grades[j] = grades[j+1];
         grades[j+1] = t;
      }
   }
}
  // now the median is just the middle value
  for (i = 0; i < 9; i++) {
    printf("%d   %d \n", i, grades[i]);
  }
  median = grades[4];
  printf ("The median grade is: %d \n", median);
  
  return 0;}
