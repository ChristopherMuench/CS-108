/*
                     PROGRAM DESCRIPTIVE HEADER FOR GHP 12

SOURCE CODE FILE NAME:ghp27.cpp

PROGRAMMER NAME:Christopher Muench

ALGORITHM:
//1.Introduce Program
//2.Get value from user to be cubed
//3.Cube user input
//4.Print value of cubed number to user
//5.Thank user for using Program
//6.TERMINATE

DATE SUBMITTED:05-03-16

BUGS:none when tested

*/


/*****************************************************************************/
/* #include PREPROCESSOR DIRECTIVE(S) (IF ANY) ARE DIRECTLY BELOW            */
/*****************************************************************************/
using namespace std;
#include <iostream>

/*****************************************************************************/
/* FUNCTION DEFINITIONS BELOW                                                */
/*****************************************************************************/

double get_input(){
  double input = 0.0;
  cout << "Please enter a value to be cubed: "<< endl;
  cin >> input;
  return (input);
}

double cube_input(double input){
  double result = 0.0;
  result = (input * input * input);
  return (result);
}

void display_input( double input,double result){
  cout << endl << input << " cubed is equal to: " << result << endl;
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
cout << endl <<"This program takes input and returns its cubed value."<< endl;
//2.Get value from user to be cubed
input = get_input();
//3.Cube user input
result = cube_input(input);
//4.Print value of cubed number to user
display_input(input,result);
//5.Thank user for using Program
cout << endl << "Thanks for using my program!" << endl;
//6.TERMINATE

/*****************************************************************************/
/* ALGORITHM STEP 6 : TERMINATE THE PROGRAM                                 */
/*****************************************************************************/
    return ( 0 ) ;


}    // MARKS THE END OF THE main( ) BLOCK OF STATEMENTS