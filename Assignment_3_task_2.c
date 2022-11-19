/*Define a C function that should remove all NEGATIVE values from an unsorted array of
integers. Your function should also preserve the order of remaining elements in the array. In the
end, this function should also return the count of the NEGATIVE values that were removed from
the array. The prototype of your function should be:
int removeNegatives (int arr[], int size, int *newSize)
Note that the third reference parameter is used to send the updated size of the array back to the
calling function.
For example, if arr contains these 7 elements { 11, -15, -2, 7, 11, 6, -8 }, then, after
the function call to removeNegatives the arr should now contain { 11, 7, 11, 6 } in its
first four indices. The variable newSize (see the 3rd parameter) should contain 4 (since the
partially filled array arr now contains 4 valid elements) and the function should return 3 (because
3 negative values were removed from the array).
Important Note:
 In your function, you are NOT allowed to declare or use any other array.
Illustrate the working of your function (on at least 4 different examples/inputs) in a complete C
program*/
#include <stdio.h>
int removeNegatives(int arr[], int size, int* newSize);
int main()
{
    int n;
    int newSize;

    //array
    int array[] = { 11, -15, -2, 7, 11, 6, -8,5,7,9,6,-5,14,-69,-59,23,-58,45 };

    //FInd size of an array 
    n = sizeof(array) / sizeof(array[0]);
    printf("Previous Size of the array is : %d\n", n);
    printf("\n\n");

    //print complete Array 
    printf("Elements in an array are : \n {");
    for (int i = 0; i < n; i++)
    {
        printf("%6d", *(array + i));
    }
    printf("  }");

    //function call to count and remove negative elements 
    removeNegatives(array, n, &newSize);

    return 0;
}

//////////////////////   FUNCTION  /////////////////////////////
int removeNegatives(int arr[], int size, int* newSize)
{

    int count = 0;
    int position = 1;

    //count number of negative elements in an array

    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) < 0)
        {
            count++;

        }

    }
    printf("\n\n");
    // assignment of count to the newsize pointer of main 
    *newSize = count;
    printf("\nTOtal negative integer in an array are :%3d", *newSize);                    //printing total number of negative integer
    printf("\n");


    // remove negative integer from an arrays 
    printf("\nArray after removing negative integer : \n{");
    for (int i = 0; i < size - count; i++
        ) {
        int temp = 0;
        if (*(arr + i) > 0)
        {
            printf("%6d\t", arr[i]);                       //printing of positive integer
        }
        else
        {
            temp = *(arr + i);                          //swaping 
            *(arr + i) = *(arr + position);
            *(arr + position) = temp;
            position++;
            i--;
        }


    }

    printf("   }");

}