/*
                     PROGRAM DESCRIPTIVE HEADER FOR GHP 11

SOURCE CODE FILE NAME: ghp11.c

PROGRAMMER NAME:Christopher D. Muench

ALGORITHM:
//1.Introduce Program
//2.create array of size 10,000
//3.populate array with pseudo-random numbers from 2 to 8 inclusive
//4.scan array, get amount of each number
//5.put results into another array
//6.print results (total # of each and their percentages)
//7.sign off with user
//8.TERMINATE

DATE SUBMITTED:02-25-16

BUGS:None

*/


/*****************************************************************************/
/* #include PREPROCESSOR DIRECTIVE(S) (IF ANY) ARE DIRECTLY BELOW            */
/*****************************************************************************/
#include <time.h>
#include <math.h>
#include <stdio.h>


/*****************************************************************************/
/* #define PREPROCESSOR DIRECTIVE(S) (IF ANY) ARE DIRECTLY BELOW             */
/*****************************************************************************/



/*****************************************************************************/
/* THE main( ) FUNCTION IS DECLARED DIRECTLY BELOW; THE main( ) FUNCTION     */
/* ACCEPTS NO PARAMETERS/ARGUMENTS.  THE main( ) FUNCTION RETURNS AN INTEGER */
/* VALUE OF ZERO TO THE OPERATING SYSTEM WHEN THE PROGRAM IS COMPLETE TO     */
/* INFORM THE OPERATING SYSTEM THAT THE  PROGRAM HAS SUCCESSFULLY TERMINATED.*/
/*****************************************************************************/

int  main ( void )
{  // MARKS THE BEGINNING OF THE main( ) BLOCK OF STATEMENTS

/*****************************************************************************/
/* LOCAL VARIABLE(S) FOR main( )(IF ANY) ARE DECLARED DIRECTLY BELOW         */
/*****************************************************************************/
  int num_array[10000] = {0}; //array holding 10000 numbers
  int num_each[7] = {0}; //7 elements (2,3,4,5,6,7,8)
  int i = 0; //index for loops
  srand((unsigned)time(0)); //seeding random num with current time

  //1.Introduce Program
printf("This program shows the amount of each number picked out of 10000.\n");

  //2.create array of size 10,000
  //3.populate array with pseudo-random numbers from 2 to 8 inclusive

  for (i = 0; i < 10000; i++) { //for loop for population of array
    num_array[i] = (random() % 7) + 2;
  }

  //4.scan array, get amount of each number
  //5.put results into another array

  for (i = 0; i < 10000; i++) { //iterate through each element of array
    switch (num_array[i]) { //switch case to determine which element of array 2
      case 2:
      num_each[0] = num_each[0] + 1;
      break;
      case 3:
      num_each[1] = num_each[1] + 1;
      break;
      case 4:
      num_each[2] = num_each[2] + 1;
      break;
      case 5:
      num_each[3] = num_each[3] + 1;
      break;
      case 6:
      num_each[4] = num_each[4] + 1;
      break;
      case 7:
      num_each[5] = num_each[5] + 1;
      break;
      case 8:
      num_each[6] = num_each[6] + 1;
      break;
      default:
      break;
    }
  }

  //6.print results (total # of each and their percentages)

  printf("\nAmount of 2's: %d\n", num_each[0]);
  printf("\nPercentage of 2's: %2.2lf\n", (num_each[0] / 10000.0) * 100.0);
  printf("\nAmount of 3's: %d\n", num_each[1]);
  printf("\nPercentage of 3's: %2.2lf\n", (num_each[1] / 10000.0) * 100.0);
  printf("\nAmount of 4's: %d\n", num_each[2]);
  printf("\nPercentage of 4's: %2.2lf\n", (num_each[2] / 10000.0) * 100.0);
  printf("\nAmount of 5's: %d\n", num_each[3]);
  printf("\nPercentage of 5's: %2.2lf\n", (num_each[3] / 10000.0) * 100.0);
  printf("\nAmount of 6's: %d\n", num_each[4]);
  printf("\nPercentage of 6's: %2.2lf\n", (num_each[4] / 10000.0) * 100.0);
  printf("\nAmount of 7's: %d\n", num_each[5]);
  printf("\nPercentage of 7's: %2.2lf\n", (num_each[5] / 10000.0) * 100.0);
  printf("\nAmount of 8's: %d\n", num_each[6]);
  printf("\nPercentage of 8's: %2.2lf\n", (num_each[6] / 10000.0) * 100.0);
 printf("\nPercentage of 8's: %2.2lf\n", (num_each[6] / 10000.0) * 100.0);

  //7.sign off with user

  printf("\n\nThanks for using my Program!\n\nGoodBye!\n\n");

  //8.TERMINATE
/*****************************************************************************/
/* ALGORITHM STEP 8 : TERMINATE THE PROGRAM
*/
/*****************************************************************************/
  return ( 0 ) ;


}    // MARKS THE END OF THE main( ) BLOCK OF STATEMENTS