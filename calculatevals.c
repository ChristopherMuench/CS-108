/*
                     PROGRAM DESCRIPTIVE HEADER FOR GHP 7

SOURCE CODE FILE NAME: ghp7.c

PROGRAMMER NAME: Christopher Muench

SHORT DESCRIPTION: This program takes two numbers from the user and
gives them the option of mathematical operations to be performed
on the two numbers. It then prints the output of said operations to
the screen.

ALGORITHM:
//1.declare necessary variables (two numbers and answer)
//2.prompt user for input of first number
//3.record users input of first number
//4.prompt user for input of second number
//5.record users input of second number
//6.print users options for number manipulation
//7.get users choice of option
//8.enter if/elseif/else statement depending on users input
//9.print answer based on users choice w/ 2 decimal places format
//10.Terminate

CALL: ./a.out AFTER COMPILING WITH gcc (WITHOUT USING THE -o SWITCH)

DATE SUBMITTED:02/02/16

BUGS:none when tested

*/
#include <stdio.h>
int main (void) {
//1.declare variables(two numbers and answer-floats, 1 choice-int)
  float num1 = 0.0;
  float num2 = 0.0;
  float answer = 0.0;
  int choice;
//2.prompt user for input of first number
  printf("\n Enter a number: ");
//3.record users input of first number
  scanf("%f", &num1);
//4.prompt user for input of second number
  printf("\n Enter another number: ");
//5.record users input of second number
  scanf("%f", &num2);
//6.print users options for number manipulation
  printf("\n  1) ADD first to second ");
  printf("\n  2) SUBTRACT second from first ");
  printf("\n  3) MULTIPLY first times second");
  printf("\n  4) DIVIDE first by second");
//7.get users choice of option
  printf("\n  Enter your choice: ");
  scanf(" %d", &choice);
//8.enter if/elseif/else statement depending on users input
  if (choice == 1){
    answer = (num1 + num2);
  }
 else if (choice == 2){
    answer = (num1 - num2);
  }
  else if (choice == 3){
    answer = (num1 * num2);
  }
  else if (choice == 4){
    answer = (num1 / num2);
  }
  else {
    printf("\n  Your choice was not valid!!!\n\n");
  }
//9.print answer based on users choice w/ 2 decimal places format
  printf("\n  The answer is %.2f\n\n\n", answer);
//10.Terminate
  return 0;
} // MARKS THE END OF THE main( ) BLOCK OF STATEMENTS
