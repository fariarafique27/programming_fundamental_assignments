/* Task 4:Write a program that creat a two dimention array initialaize with test data . program should have
following function
1- getTotal()   ...it should accept 2D array as its arrgument and return total of all the value in an array.
2- getAverage() ...it should accept 2D array as its arrgument and return average of all the value in an
    array
3- getRowTotal()  ..it should accept 2D array as its 1st arrgument and an integer as 2nd arrgument .
    2nd argument should be the subscript of a row in an array . The function should return total of
    all the value in a specified row

4- getColumnTotal() ......it should accept 2D array as its 1st arrgument and an integer as 2nd arrgument .
    2nd argument should be the subscript of a coloumn in an array . The function should return total of
    all the value in a specified column

5- getHighestInRow() ...it should accept 2D array as its 1st arrgument and an integer as 2nd arrgument .
    2nd argument should be the subscript of a row in an array . The function should return Highest
    element in a specified row

6- getLowestInRow() ....it should accept 2D array as its 1st arrgument and an integer as 2nd arrgument .
    2nd argument should be the subscript of a row in an array . The function should return Lowest
   element the value in a specified row
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define  ROW 4
#define  COL 4

//function defination 
void getTotal(int array[ROW][COL]);
void getAverage(int array[ROW][COL]);
void  getRowTotal(int array[ROW][COL], int rownumber);
void  getColumnTotal(int array[ROW][COL], int columnnumber);
void getHighestInRow(int array[ROW][COL], int row_num);
void getLowestInRow(int array[ROW][COL], int row_num);


//***************** MAIN ************************
int main()
{
    //declaration 
    int array[ROW][COL];
    int rownumber, columnnumber, n1, n2;
    //initilaization 
    printf("Enter 16 element in an array : ");
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            scanf("%d", &array[i][j]);
        }

    }

    // elements present in an array 
    printf("Elements present in an array are  : \n");
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    getTotal(array);                      //function call
    getAverage(array);                       //function call

    //prompt rownumber
    printf("\nEnter row number between (1-4) My function will print ROW total: ");
    scanf("%d", &rownumber);
    getRowTotal(array, rownumber);            //function call

    //prompt colmn number
    printf("\nEnter column number between (1-4)  My function will print COLUMN total: ");
    scanf("%d", &columnnumber);
    getColumnTotal(array, columnnumber);              //function call

    //prompt rownumber to fint highest 
    printf("\nEnter row number between (1-4)  My function will print Highest elemet in a row  : ");
    scanf("%d", &n1);
    getHighestInRow(array, n1);                           //function call

    //prompt rownumber to find lowest
    printf("\nEnter row number between (1-4) My function will print lowest elemet in row  : ");
    scanf("%d", &n2);
    getLowestInRow(array, n2);                                //function call

    return 0;
}
// ****************** FUNCTION ******************
void getTotal(int array[ROW][COL])
{
    int sum = 0;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            sum = sum + array[i][j];
        }

    }
    printf("\nSUM OF ALL THE ELEMENTS PRESENT IN AN ARRAY ARE : %d\t\n", sum);
}
//Average function 
void getAverage(int array[ROW][COL])
{
    float sum = 0;
    int count = 0;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            sum = sum + array[i][j];
            count++;
        }

    }
    float average = sum / count;
    printf("\nAverage OF ALL THE ELEMENTS PRESENT IN AN ARRAY ARE : %f\t\n", average);
}
//sum of element presen in a row 
void  getRowTotal(int array[ROW][COL], int row_number)
{
    int sum = 0;
    for (int j = 0; j < COL; j++)
    {
        sum = sum + array[row_number - 1][j];

    }

    printf("SUM OF ALL THE ELEMENTS PRESENT IN %d ROW IS : %d\t\n", row_number, sum);
}
//sum of element presen in a columnn
void  getColumnTotal(int array[ROW][COL], int col_number)
{

    int sum = 0;

    for (int i = 0; i < ROW; i++)
    {
        sum = sum + array[i][col_number - 1];

    }

    printf("SUM OF ALL THE ELEMENTS PRESENT IN %d COLUMN IS : %d\t\n", col_number, sum);
}
// Find highest element in a given row 
void getHighestInRow(int array[ROW][COL], int row_num)
{
    int highestelement = 0;

    for (int j = 0; j < COL; j++)
    {
        if (array[row_num - 1][j] > highestelement)
        {
            highestelement = array[row_num - 1][j];
        }

    }
    printf("Highest element in row %d is :%d\n ", row_num, highestelement);
}
// Find lowest element in a given row
void getLowestInRow(int array[ROW][COL], int row_num)
{
    int lowestELement = 1000;

    for (int j = 0; j < COL; j++)
    {
        if (array[row_num - 1][j] < lowestELement)
        {
            lowestELement = array[row_num - 1][j];
        }

    }
    printf("Lowest element in row %d is :%d ", row_num, lowestELement);
}