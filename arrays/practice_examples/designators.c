/* 
*   Program shows the use of designators in  arrays
*/

#include<stdio.h>

int main()
{
    int arr[4] = {0}; // all elements become 0 if printed
    int arr2[] = {1,2,3,4,5}; // size can be ommited in this array it simply just counts the no ofelements
    int arr3[] = {[0] = 1,[5] = 3}; // first and fifth element have thes values and size is the size of the max index all other values are 0
    

    return 0;
}