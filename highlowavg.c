/*
                     PROGRAM DESCRIPTIVE HEADER FOR GHP 9

SOURCE CODE FILE NAME: highlowavg.c

PROGRAMMER NAME: Christopher Muench

ALGORITHM:
    //1. Intro program (optional)
    //2. Ask user to enter a positive integer (or a negative integer to stop)
    //3. Record the user's input
    //4. Test the input >= 0
    //4a. If true
    //4a1. increment counter by 1
    //4a2. add user input to running total
    //4a3. modulo (%) input by 2
    //4a4. if result is 1-add total to odd total and increment odd count by 1
    //4a4a. test result against highest odd
    //4a4a1. if greater replace highest w/ input
    //4a4a2. if less test against lowest odd
    //4a4a3. if lower than lowest replace lowest w/ input
    //4a4a4. if higher than lowest go to step 2
    //4a5. if result is 0-add total to even total and increment evens by 1
    //4a5a. test result against highest even
    //4a5a1. if greater replace highest w/ input
    //4a5a2. if less test against lowest even
    //4a5a3. if lower than lowest replace lowest w/ input
    //4a5a4. if higher than lowest go to step 2
    //4b. if false - go to step 5
    //5. calculate average of all inputs (running_total/counter_total)
    //6. calculate average of odd inputs (total_odd/counter_odd)
    //7. calculate average of even inputs(total_even/counter_even)
    /*8. print largest even, smallest even, largest and smallest odds /
    average of evens, average of odds, and average of all numbers entered*/
    //9. thank user for using program
    //10. TERMINATE
    /*

VARIABLES NEEDED:
   user_input
   running_total
   counter_total
   lowest_odd
   highest_odd
   total_odd
   counter_odd
   lowest_even
   highest_even
   total_even
   counter_even
   avg_all
   avg_even
   avg_odd
DATE SUBMITTED: 02/19/16

BUGS: None when tested

*/
/*****************************************************************************/
/* #include PREPROCESSOR DIRECTIVE(S) (IF ANY) ARE DIRECTLY BELOW            */
/*****************************************************************************/

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
int user_input = 0;
int running_total = 0;
int counter_total = 0;
int lowest_odd;
int highest_odd = 0;
int total_odd = 0;
int counter_odd = 0;
int lowest_even;
int highest_even = 0;
int total_even = 0;
int counter_even = 0;
float avg_all = 0.0;
float avg_even = 0.0;
float avg_odd = 0.0;

//1. Intro program (optional)
printf("\nThis program takes input of integers and prints stats of the set");
//2. Ask user to enter a positive integer (or a negative integer to stop)

while (user_input >= 0)
{
  printf("\nPlease enter a positive integer. Enter a negative to stop: ");
  //3. Record the user's input
  scanf ("%d", &user_input);
  //4. Test the input >= 0
//4a. If true
if (user_input >= 0)
{
//4a1. increment counter by 1
  counter_total ++;
//4a2. add user input to running total
  running_total = (running_total + user_input);
//4a3. modulo (%) input by 2
  if (user_input % 2 == 1)
  {
//4a4. if result is 1-add total to odd total and increment odd count by 1
    total_odd = (total_odd + user_input);
    if (counter_odd == 0){
      lowest_odd = user_input;
    }
    counter_odd  ++;

//4a4a. test input against highest odd
    if (user_input > highest_odd)
    {
//4a4a1. if greater replace highest w/ input
       highest_odd = user_input;
    }
//4a4a2. if less test against lowest odd
    else
    {
//4a4a3. if lower than lowest replace lowest w/ input
       if (user_input < lowest_odd)
       {
           lowest_odd = user_input;
        }
    }
//4a4a4. if higher than lowest go to step 2
  }
//4a5. if result is 0-add input to even total and increment evens by 1
  else if (user_input % 2 == 0)
  {
    total_even = (total_even + user_input);
 if (counter_even == 0){
      lowest_even = user_input;
    }
    counter_even ++;
//4a5a. test input against highest even
    if (user_input > highest_even)
    {
//4a5a1. if greater replace highest w/ input
      highest_even = user_input;
    }
//4a5a2. if less test against lowest even
    else
    {
//4a5a3. if lower than lowest replace lowest w/ input
      if (user_input < lowest_even)
      {
        lowest_even = user_input;
      }
    }
//4a5a4. if higher than lowest go to step 2
  }
//4b. if false - go to step 5
}
}
//5. calculate average of all inputs (running_total/counter_total)
avg_all = (running_total / counter_total);
//6. calculate average of odd inputs (total_odd/counter_odd)
avg_odd = (total_odd / counter_odd);
//7. calculate average of even inputs(total_even/counter_even)
avg_even = (total_even / counter_even);
/*8. print largest even, smallest even, largest and smallest odds /
average of evens, average of odds, and average of all numbers entered*/
printf("\nLargest even number entered: %d", highest_even);
printf("\nLargest odd number entered: %d", highest_odd);
printf("\nSmallest even number entered: %d", lowest_even);
printf("\nSmallest odd number entered: %d", lowest_odd);
printf("\nAverage of all even numbers entered: %.5f", avg_even);
printf("\nAverage of all odd numbers entered: %.5f", avg_odd);
printf("\nAverage of all numbers entered: %.5f", avg_all);
//9. thank user for using program
printf("\n\nProgram design by Christopher Muench - Thanks for using!\n\n");
//10. TERMINATE

    return ( 0 ) ;


}    // MARKS THE END OF THE main( ) BLOCK OF STATEMENTS