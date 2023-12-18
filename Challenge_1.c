/* Libraries that will be used in this program */
#include <stdio.h>
#include <stdlib.h>

/* Definitions of global variables */
#define TEST (1==1)
int* arrayPtr;

/**
 * Check the time it takes to run the sorting algorithms
 */

void checkTime()
{

}

/**
 * Checks to see if the array is correct
 */

void checkArray()
{

}

/**
 * Ask the user for array input
 */

void askUser()
{
	
}

/**
 * Sync the internal function arrays with the main array
 */

void syncArray()
{

}

/**
 * Swap two elements with each other
 */

void swap()
{

}

/**
 * Create left bound and right bound pointers to be able to swap values
 */

int Partition(int arr[], int pivot, int highIndex)
{
	// Variables that will be used in this function
	int left_bound = 0;
	int right_bound = highIndex;

	return right_bound;
}

/**
 * This recursive function performs the quickSort operation. It finds the pivot and then calls Partition
 * @param arr[] - the array to be sorted
 * @param highIndex - the end index of the part of the array we're sorting
 * @calls - Partition(), quickSort()
 * @return - void
*/ 

void quickSort(int arr[], int highIndex)
{
	// The variables we will need
	int pivot = highIndex / 2;
	int returnedBound = Partition(tmpArray, pivot); // Partitions the array and gives back the value of the right bound

	// Recursively call the function
	quickSort(tmpArray, returnedBound);
	quickSort(tmpArray, sizeof(arr));
}

/**
 * This function creates the array and calls the sort functions 
 * @calls - quickSort()
 */

int main()
{

}
