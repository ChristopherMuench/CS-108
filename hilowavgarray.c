/*
                     PROGRAM DESCRIPTIVE HEADER FOR GHP 15/16

SOURCE CODE FILE NAME:ghp1516.c

PROGRAMMER NAME:Christopher D. Muench

ALGORITHM:
//Do 1 + 2 in main
//1.Create 2d array holding 5 rows and 3 columns
//2.populate array with random value from 0-100000
//Use show_it function:
//3.print row, column, address and integer value of each element
//Use hi_lo_avg function:
//4.print highest value in array with row, column, and address
//5.print lowest value in array with row, column, and address
//6.print average value in array
//7.TERMINATE




DATE SUBMITTED: 04-04-16

BUGS:None when tested

*/


/*****************************************************************************/
/* #include PREPROCESSOR DIRECTIVE(S) ARE DIRECTLY BELOW                     */
/*****************************************************************************/

#include <stdio.h>
#include <math.h>
#include <time.h>

/*****************************************************************************/
/* #define PREPROCESSOR DIRECTIVE(S) (IF ANY) ARE DIRECTLY BELOW             */
/*****************************************************************************/

/*****************************************************************************/
/* PROGRAMMER-CREATED FUNCTION PROTOTYPES ARE DIRECTLY BELOW                 */
/*****************************************************************************/

void show_it(int[][5], int, int);
void hi_lo_avg(int[][5], int, int);

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

//Two index values for the two loops populating array
int index1 = 0;
int index2 = 0;

//Seed for random number generator
srandom((unsigned)time(0));

//Do 1 + 2 in main
//1.Create 2d array holding 5 rows and 3 columns
int array[3][5] = {0};

//2.populate array with random value from 0-100000
for (index1 = 0; index1 < 3; index1++) {
  for (index2 = 0; index2 < 5; index2++){
    array[index1][index2] = (random() % 100001);
    printf("%d\n", array[index1][index2]); //REMOVE THIS!!!!!
  }
}

//Use show_it function:
//3.print row, column, address and integer value of each element
show_it(array, 3, 5);

//Use hi_lo_avg function:
//4.print highest value in array with row, column, and address
//5.print lowest value in array with row, column, and address
//6.print average value in array
hi_lo_avg(array, 3, 5);

//7.TERMINATE
printf("\n\n\nThanks for using my program!\n\n\n");

/*****************************************************************************/
/* ALGORITHM STEP 7 : TERMINATE THE PROGRAM                                 */
/*****************************************************************************/
    return ( 0 ) ;


}    // MARKS THE END OF THE main( ) BLOCK OF STATEMENTS




/*****************************************************************************/
/* PROGRAMMER-CREATED FUNCTION DECLARATIONS ARE DIRECTLY BELOW               */
/*****************************************************************************/

void show_it(int array[][5], int index1, int index2){
  int row = 0;
  int column = 0;
  for (row = 0; row < index1; row++) {
 for (column = 0; column < index2; column++) {
      printf("\nRow: %d",row);
      printf("\nColumn: %d",column);
      printf("\nInteger value: %d", array[row][column]);
      printf("\nAddress: %p", &array[row][column]);
      printf("\n\n\n");
    }
  }
return;
}

void hi_lo_avg(int array[][5], int index1, int index2){
  int high = 0;
  int high_row = 0;
  int high_column = 0;
  int * address_h;
  int low = 100002;
  int low_row = 0;
  int low_column = 0;
  int * address_l;
  double avg = 0.0;
  int row = 0;
  int column = 0;
  double total = 0.0;
  for (row = 0; row < index1; row++){
    for (column = 0; column < index2; column++){
      total = (total + array[row][column]);
      if (array[row][column] > high) {
        high = array[row][column];
        high_row = row;
        high_column = column;
        address_h = &array[row][column];
      }
      else {
        if (array[row][column] < low) {
          low = array[row][column];
          low_row = row;
          low_column = column;
          address_l = &array[row][column];
        }
      }
    }
  }
  avg = (total / 15.0);
  printf("\nHigh Value: %d", high);
  printf("\nHigh Row: %d", high_row);
  printf("\nHigh Column: %d", high_column);
  printf("\nHigh Address: %p", address_h);
  printf("\nLow Value: %d", low);
  printf("\nLow Row: %d", low_row);
  printf("\nLow Column: %d", low_column);
  printf("\nLow Address: %p", address_l);
  printf("\nAverage of all Values: %.4lf", avg);
  printf("\n\n\n");
  return;
}