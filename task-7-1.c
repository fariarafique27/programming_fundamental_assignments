//******8.7********(CONVERTING STRING TO INTEGER FOR CALCULATIOn)
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
	int sum;
	printf("My program will find sum of your string \n");

	//initialization of 1 array 
	printf("Enter string 1 of integers type: ");
	fgets(array1, 50, stdin);

	//initialization of 2 array 
	printf("Enter string 2 of integers type: ");
	fgets(array2, 50, stdin);

	//initialization of 3 array 
	printf("Enter string 3 of integers type : ");
	fgets(array3, 50, stdin);

	//initialization of 4 array 
	printf("Enter string 4 of integers type : ");
	fgets(array4, 50, stdin);

	//atoi means 
	sum = atoi(array1) + atoi(array2) + atoi(array3) + atoi(array4);

	//output 
	printf("The sum OF STRING after conversion is: %d\n", sum);
	return 0;
}