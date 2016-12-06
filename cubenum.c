/*
                     PROGRAM DESCRIPTIVE HEADER FOR GHP 12

SOURCE CODE FILE NAME:ghp13.c

PROGRAMMER NAME:Christopher Muench

ALGORITHM:
//1.Introduce Program
//2.Get value from user to be cubed
//3.Cube user input
//4.Print value of cubed number to user
//5.Thank user for using Program
//6.TERMINATE

DATE SUBMITTED:03-15-16

BUGS:none when tested

*/


/*****************************************************************************/
/* #include PREPROCESSOR DIRECTIVE(S) (IF ANY) ARE DIRECTLY BELOW            */
/*****************************************************************************/

#include <stdio.h>
#include <math.h>

/*****************************************************************************/
/* FUNCTION DEFINITIONS BELOW                                                */
/*****************************************************************************/

double get_input(){
  double input = 0.0;
  printf("\nPlease enter a value to be cubed: ");
  scanf("%lf", &input);
  return (input);
}

double cube_input(double input){
  double result = 0.0;
  result = (input * input * input);
  return (result);
}

void display_input( double input,double result){
  printf("\n\n\n%.2lf cubed is equal to: %.2lf\n\n",input,result);
  return;
}

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

double input = 0.0, result = 0.0;

//1.Introduce Program
printf("\n\nThis program takes an input and returns its cubed value.\n\n");

//2.Get value from user to be cubed
input = get_input();

//3.Cube user input
result = cube_input(input);

//4.Print value of cubed number to user
display_input(input,result);

//5.Thank user for using Program
printf("\nThanks for using my program!\n\n");

//6.TERMINATE

/*****************************************************************************/
/* ALGORITHM STEP 6 : TERMINATE THE PROGRAM                                 */
/*****************************************************************************/
    return ( 0 ) ;


}    // MARKS THE END OF THE main( ) BLOCK OF STATEMENTS