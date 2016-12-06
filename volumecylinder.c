/*
                     PROGRAM DESCRIPTIVE HEADER FOR GHP #6

SOURCE CODE FILE NAME: volumecylinder.c

PROGRAMMER NAME:Christopher Muench

SHORT DESCRIPTION:This program takes user input of the height and
radius of a cylinder and calculates and returns the volume to the
user.

ALGORITHM:
    1.introduce program to user
    2.get input from user of a radius
    3.record input
    4.get input from user of a height
    5.record input
    6.square user input of radius
    7.multiply pi by radius squared and height
    8.return answer to user along with original inputs
    9.sign off to user
    10.terminate



CALL: ./a.out AFTER COMPILING WITH gcc (WITHOUT USING THE -o SWITCH)

DATE SUBMITTED:01-30-16

BUGS:

*/
#include <stdio.h>
#define PI 3.14159265
int main (void){
  double radius = 0.0;
  double height = 0.0;
  double radius_squared = 0.0;
  double volume_cylinder = 0.0;
  //1.introduce program to user
  printf("This program determines the volume of a cylinder.\n");
  //2.get input from user of a radius
  printf("Please enter a radius in inches: ");
  //3.record input
  scanf("%lf",&radius);
  //4.get input from user of a height
  printf("Pleae enter a height in inches: ");
  //5.record input
  scanf("%lf",&height);
  //6.square user input of radius
  radius_squared = (radius * radius);
  //7.multiply pi by radius squared and height
  volume_cylinder = (PI * radius_squared * height);
  //8.return answer to user along with original inputs
  printf("Original radius: %lf inches", radius);
  printf("\nOriginal height: %lf inches", height);
  printf("\nVolume of cylinder: %lf inches squared", volume_cylinder);
  //9.sign off to user
  printf("Program designed by: Christopher Muench\n");
  //10.terminate
return 0;
}
