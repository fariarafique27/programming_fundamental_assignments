/*Define a C function:
void cyclicRotate (int arr [], int n, int k);

This function takes an array (arr) and its size (n) as its first two parameters. Third parameter is
an integer value k. This function should cyclically rotate all the elements of the array arr, by k
positions to the right.
For example,
if arr contains these 8 elements { 3, 4, 5, 8, 7, 2, 9, 1 },
then, after the function call cyclicRotate (arr, 8, 3)
the arr should contain these 8 elements { 2, 9, 1, 3, 4, 5, 8, 7 }.
In your function:
 You can assume that k is greater than 0 and less than n
 You are NOT allowed to declare or use any other array.
Illustrate the working of your function (on at least 4 different examples/inputs) in a complete C
program.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void rotate(int arr[], int n, int k);

int main()
{
    int arr[] = { 3, 4, 5, 8,7 , 2 , 9 , 1 }, i, k;

    //size of an array
    int n = sizeof(arr) / sizeof(arr[0]);

    //print array
    printf("Given array is: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\n Enter number of position to rotate an array : ");
    scanf("%d", &k);


    //function call
    rotate(arr, n, k);

    //print array after rotation 
    printf("\nRotated array is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);

    }

    return 0;
}
//***************** FUNCTION *********************
void rotate(int arr[], int n, int k)
{
    while (k)
    {
        //LEFT ROTATION

     /*     int temp , i;
    temp=arr[0];
    for (i = 0; i <n-1; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[n-1]=temp;
    k--;*/


    //RIGHT ROTATION 
        int temp, i;
        temp = arr[n - 1];
        for (i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[0] = temp;
        k--;
    }

}