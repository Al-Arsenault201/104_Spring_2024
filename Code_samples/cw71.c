#include <stdio.h>
int main() {
// Variable declarations
int num; /* user’s positive number entry */
int count = 0; /* how many positive numbers user has entered */
int stop = 0; /* don’t stop */
int matched; /* used like flag to see if user entered ’quit’ */
             /* matched will be = 0 if the user typed 'quit' */
             /* matched wil be = 1 if the user did not type 'quit' */

 int innerLoopCounter; /* how many iterations to print * */


 /* your outer loop starts here */

 while (stop == 0) {

   // TODO: Create outer loop for user input checking                                       
// TODO: Prompt user for positive number                                                 
// TODO: If user typed ’quit’, set stop to 1 so we can break out of outer loop;
   
 printf("How many characters in your bar?\n");
 printf("Please be sure to enter a positive integer. \n");
 matched = scanf("%d", &num);
 
 if (matched == 0) {
   printf("Thanks for using this program \n");
   stop = 1;
 }else {
 innerLoopCounter = 0;
   while (innerLoopCounter < num){
       printf("*");
       innerLoopCounter++;
	}
   printf("\n");
   count++;
   
 }

// else if user entered positive number, create inner loop for printing and
// updating count;
// else notify the user they entered an invalid number
// TODO: Let user know if no positive numbers were entered
return 0;
}
