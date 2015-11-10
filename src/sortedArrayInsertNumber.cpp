/*
OVERVIEW: Given a sorted array, insert a given number into the array at appropriate position.
			E.g.: Arr = [2, 4, 6], num = 5 final Arr = [2, 4, 5, 6]. 5 is inserted at 2nd index.

INPUTS: Integer	Array pointer, length of the array, number to be inserted.

OUTPUT: Array pointer after inserting number.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Use realloc to allocate memory.
*/

#include <stdio.h>
#include <malloc.h>

int * sortedArrayInsertNumber(int *Arr, int len, int num)
{
	if (Arr == NULL || len <= 0)
		return NULL;
	int first = 0;
	int last = len - 1;
    int mid;
	int index = 0;
	while (first < last) {
        mid = (first + last) / 2;
        if (Arr[mid] == num)
            index = mid;
        else if (Arr[mid] > num)
            last = mid - 1;
        else
            first = mid + 1;
    }
    if (Arr[first] == num)
        index = first;
    else if (Arr[first] > num)
        index = first;
    else
        index = first + 1;
	if (index == len)
		Arr[index - 1] = num;
	while (index < len) {
		Arr[len - 1] = Arr[len - 2];
		len--;
	}
	Arr[index] = num;
	return Arr;
}