#include <stdio.h>

/*
  int main() {
  return 0;
    }
*/

int printMessage (int ErrNo) {
  switch (ErrNo) {
  case 0: printf ("Your program completed with no errors\n"); break;
  case 1: printf ("error - you cannot divide by 0 \n"); break;
  case 2: printf ("Error - Age cannot be a negative number \n"); break;
  case 404: printf ("Error - page not found \n"); break;
  case 302: printf ("Error - no internet connection \n"); break;
  default: printf ("Error - unknown error condition \n");
  }
}
