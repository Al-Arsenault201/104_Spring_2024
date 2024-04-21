#include <stdio.h>
#include "errMessage.h"

int main () {
  int err;

  printf (" Enter the error number to test \n");
  scanf ("%d", &err); 

  printMessage(err);
  
  return 0;
}
