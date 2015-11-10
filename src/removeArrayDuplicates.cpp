/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

INPUTS: Integer array and length of the array.

OUTPUT: Update input array by removing duplicate values.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>

void * removeArrayDuplicates(int *Arr, int len)
{
	if (Arr == NULL || len <= 0)
		return NULL;
	for (int index = 0; index < len; index++) {
		for (int ind = index + 1; ind < len; ind++) {
			if (Arr[ind] == Arr[index]) {
				for (int idx = ind; idx < len; idx++) {
					Arr[idx] = Arr[idx + 1];
				}
				len--;
			}
		}
	}
}