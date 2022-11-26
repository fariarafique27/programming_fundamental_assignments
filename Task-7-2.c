//******8.7********(CONVERTING STRING TO FLOATING POINT  FOR CALCULATIOn)
/*WRITE A PROGRAM THAT IINPUT 4 STRINGS REPRESENTING INTEGER , CONVERT THE STRING TO INTEGER ,
SUM THE VALUE AND PRINT TOTAL OF FOUR VALUE*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 50
int main()
{
	//declaration 
	char array1[SIZE];
	char array2[SIZE];
	char array3[SIZE];
	char array4[SIZE];
	float sum;

	//initialization 
	printf("My program will find sum of your string \n");

	printf("Enter string 1 of float type: ");
	fgets(array1, 50, stdin);


	printf("Enter string 2 of float type: ");
	fgets(array2, 50, stdin);


	printf("Enter string 3 of float type : ");
	fgets(array3, 50, stdin);


	printf("Enter string 4 of float type : ");
	fgets(array4, 50, stdin);

	//atoi means 
	sum = atof(array1) + atof(array2) + atof(array3) + atof(array4);

	//output 
	printf("The sum OF STRING after conversion is: %f\n", sum);
	return 0;
}