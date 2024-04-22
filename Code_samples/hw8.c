#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define TOTAL_GRADES 36


int main () {

  int numA = 0;
  int numAplus = 0;
  int numAminus = 0;
  int numBplus = 0;
  int numB = 0;
  int numBminus = 0;
  int numCplus = 0;
  int numC = 0;
  int numCminus = 0;
  int numDplus = 0;
  int numD = 0;
  int numDminus = 0;
  int numF = 0;
  int grade; 
  int gradeCounter;
  int totalGrades = TOTAL_GRADES;
  float sum = 0.0;
  float average;
  int highest = 0;
  int lowest = 100;
  char letterGrade;
  
  srandom(time(0));

  for (gradeCounter = 0; gradeCounter < totalGrades; gradeCounter++) {
// Randomly generate a letter grade from ABCDF
    letterGrade = "ABCDF" [random() % 5];
    switch(letterGrade){
    case 'A':
      grade = (random()%11) + 90;
      if (grade <= 93){
	numAminus++;
      } else if (grade >=98){
	numAplus++;
      }else {
	numA++;
	  }
      break; 
    case 'B':
      grade = (random()%10) + 80;
      if (grade <= 83){
        numBminus++;
      } else if	(grade >=88){
        numBplus++;
      }else {
	numB++;
          }
       
      break;

    case 'C':
    case 'D':
    default:
      numF++;


    } //end of switch statement
  sum += grade;
  if (grade > highest){
    highest = grade;
}
if (grade < lowest){
  lowest = grade;
 }

} //end of for loop

//insert code to calculate and print out average here
return 0;
}
