#include <stdio.h>

int main () {
  int change[4];
  int cents; 
  void makechange(int cents, int change[4]);

  
  printf("THis program will figure out the change for you . \n\n");
  printf("Enter the number of cents: ");
  scanf("%d", &cents);

  printf(" Location of change: %p \n\n", change);


  makechange( cents, change);  //notice we're passing an array, which means we're passing a pointer

  printf("Change for %d cents is: %d quarters, %d dimes, %d nickels and %d pennies \n", cents, change[0], change[1], change[2], change[3]);
												      

  return 0;
}
void makechange( int money, int coins[4]) {

  printf ("Location of coins: %p \n\n", coins);
  int i;
  int values[4] = {25, 10, 5, 1};
  for (i = 0; i < 4; i++) {
    coins[i] = money/values[i];
    money -= coins[i]*values[i];
  }

}
