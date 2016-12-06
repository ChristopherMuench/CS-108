/*
                     PROGRAM DESCRIPTIVE HEADER FOR GHP 14

SOURCE CODE FILE NAME:ghp14.c

PROGRAMMER NAME: Christopher Muench

ALGORITHM:
//1.Introduce PROGRAM
//2.Get input of integer value from user
//3.Store value
//4.Determine if input is prime or not
//4a.If prime, return 'P', If not, return 'N'
//5.If Prime, display message telling user number is prime
//6.If not Prime, inform user and print all factors of number
//7.Sign off with user
//8.TERMINATE


DATE SUBMITTED:03/20/16

BUGS:None when tested

*/


/*****************************************************************************/
/* #include PREPROCESSOR DIRECTIVE(S) ARE DIRECTLY BELOW                     */
/*****************************************************************************/
#include <stdio.h>
#include <math.h>


/*****************************************************************************/
/* #define PREPROCESSOR DIRECTIVE(S) (IF ANY) ARE DIRECTLY BELOW             */
/*****************************************************************************/



/*****************************************************************************/
/* PROGRAMMER-CREATED FUNCTION PROTOTYPES ARE DIRECTLY BELOW                 */
/*****************************************************************************/

int get_input(void);

char test_prime(int);

void print_factors(int);

/*****************************************************************************/
/* THE main( ) FUNCTION IS DECLARED DIRECTLY BELOW; THE main( ) FUNCTION     */
/* ACCEPTS NO PARAMETERS/ARGUMENTS.  THE main( ) FUNCTION RETURNS AN INTEGER */
/* VALUE OF ZERO TO THE OPERATING SYSTEM WHEN THE PROGRAM IS COMPLETE TO     */
/* INFORM THE OPERATING SYSTEM THAT THE  PROGRAM HAS SUCCESSFULLY TERMINATED.*/
/*****************************************************************************/

int  main ( void )
{  // MARKS THE BEGINNING OF THE main( ) BLOCK OF STATEMENTS

/*****************************************************************************/
/* LOCAL VARIABLE(S) ARE DECLARED DIRECTLY BELOW                             */
/*****************************************************************************/
int input = 0;
char prime = 'A';

//1.Introduce PROGRAM
printf("\nThis program determines wether or not a number is prime.\n");
printf("\nIt also lists all factors of the number if it is not prime.\n");

//2.Get input of integer value from user
//3.Store value
input = get_input();

//4.Determine if input is prime or not
//4a.If prime, return 'P', If not, return 'N'
prime = test_prime(input);

//5.If Prime, display message telling user number is prime
if (prime == 'P') {
  printf("\n%d is a prime number.\n", input);
}

//6.If not Prime, inform user and print all factors of number
if (prime != 'P') {
  print_factors(input);
}

//7.Sign off with user
printf("\n\n\nProgram designed by Christopher Muench.");

//8.TERMINATE
/*****************************************************************************/
/* ALGORITHM STEP 8 : TERMINATE THE PROGRAM                                 */
/*****************************************************************************/
    return ( 0 ) ;


}    // MARKS THE END OF THE main( ) BLOCK OF STATEMENTS



/*****************************************************************************/
/* PROGRAMMER-CREATED FUNCTION DECLARATIONS ARE DIRECTLY BELOW               */
/*****************************************************************************/
int get_input(void) {
  int input = 0;
  printf("\n\nPlease enter an integer: ");
  scanf("%d", &input);
  return (input);
}

char test_prime(int input) {
  char prime = 'A';
  int half_input = input / 2;
  int i = 0;
  int flag = 0;
  for (i = 2; i <= half_input; i++) {
    if (input % i == 0) {
      flag = 1;
      break;
    }
  }
  if (flag == 0) {
    prime = 'P';
  }
  else {
    prime = 'N';
  }
  return (prime);
}

void print_factors(int input) {
  int i = 0;
  printf("\n%d is not Prime.\n", input);
  printf("\nFactors of %d are: ", input);
  for (i = 1; i <= input; i++) {
    if(input % i == 0) {
      printf("%d ", i);
    }
  }
  return;
}