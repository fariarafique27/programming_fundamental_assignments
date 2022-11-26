/*Task 6- (MEDIAN FUNCTION) In statistics when set of values is stored in an assending or decending 
order , its median is the middle value if set contain even number its value is average of two middle value 
THE function should have following characteristics 
1-An array of integer
2-An integer that indicate number of elements in an array 
function should determine the median of an array .This value should be return as a double */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 100
void medianFunction(float* array, int n);
int main()
{
    float array[SIZE];
    int num;
    float median, t;
    printf("How many elements you wanna enter in an array: ");
    scanf("%d", &num);

    //print element in an array
    for (int i = 1; i <= num; i++)
    {
        printf("Input %d values ", i);
        scanf("%f", &array[i]);
    }


    //sort an array
    printf("Sorted Elements present in an array are :");
    for (int i = 1; i <= num - 1; i++)
    {
        for (int j = 1; j <= num - i; j++) {
            if (array[j] <= array[j + 1])
            {
                t = array[j];
                array[j] = array[j + 1];
                array[j + 1] = t;
            }
            else
                continue;
        }
    }
    medianFunction(array, num);

}
void medianFunction(float* array, int num)
{
    float median;
    if (num % 2 == 0)
        median = (array[num / 2] + array[num / 2 + 1]) / 2.0;
    else
        median = array[num / 2 + 1];
    for (int i = 1; i <= num; i++)
        printf("%.2f ", array[i]);
    printf("\nMedian of the array is %.2f", median);
}
    


