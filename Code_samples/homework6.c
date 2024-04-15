/**************************************
** File:  guess.c
** Author: <myName>
** Date:  <todaysDate>
** Section: CMSC104 Section 02
** E-mail: <myEmailAddress>
**
** This file contains the main program for <assignment>.
CMSC 104 Section 02 1 Spring 2024
CMSC 104 Section 02: Homework 6
** <Explain what the assignment is asking you to do here.>
**************************************/
#include <stdio.h>
// Constant values to use if you don’t want to do any Extra Credit
#define LOW 1
#define HIGH 100
int main() {
   // Variables to use without any Extra Credit embellishments
   char response;  /* read in h/l/y answer from the user */
   char cr;        /* read in carriage return, but don’t really need to use */
   int guess;      /* program’s guess of user’s secret number */
   // Variable(s) to use for the Extra Credit embellishments
   int min = LOW;        /* lowest number of user’s range for program to guess */
   int max = HIGH;       /* highest number of user’s range for program to guess */
   // EC: Prompt for minimum value of range to guess
   // EC: Prompt for maximum value of range to guess
   // EC: Ensuring max > min
   // Prompting user to choose a number within their provided range
   printf("Think of a number between %d and %d.\n", min, max);
   printf("I will guess the number, then tell me if my guess is\n");
   printf("too high (enter ’h’), too low (enter ’l’), or correct\n");
   printf("(enter ’y’ for ’yes’).\n\n");
   // do-while loop to guess user’s secret number
      // Guess a number in the middle of the range
      // Ask the user if guess is right
      // If user says guess is right, display "Yay! I got it!\n";
      // else if user says guess is high, update highEnd to guess;
      // else if user says guess is low, update lowEnd to guess;
      // else display "[WARNING]: Invalid response, must be h/l/y!\n";
   // end do-while loop when user says yes or is cheating
   // If lowEnd equals highEnd, accuse the player of cheating

return 0;
}
