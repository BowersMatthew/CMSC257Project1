////////////////////////////////////////////////////////////////////////////////
//
//  File           : cmsc257-s17-assign1.c
//  Description    : This is the main source code for for the first assignment
//                   of CMSC257.  See the related
//                   assignment page for details.
//
//   Author        : ????
//   Last Modified : ????
//

// Include Files
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

// Project Includes
#include <cmsc257-s17-assign1-support.h>

//
// Functions

////////////////////////////////////////////////////////////////////////////////
//
// Function     : main
// Description  : The main function for the CMSC257 assignment #1
//
// Inputs       : argc - the number of command line parameters
//                argv - the parameters
// Outputs      : 0 if successful test, -1 if failure

int main(int argc, char *argv[]) {
    int size = 20;

	// Local variables
	// NOTE: this is where you will want to add some new variables
	float f_array[size];
    int i;
    int intArray[size];

	// Step #1 - read in the float numbers to process
	for (i=0; i<size; i++) {
		scanf("%f", &f_array[i]);
	}

    // Step #2 - convert the floating point values to integer
    printf("filling int array with truncated floats mod 16\n");
    floatArrayToInt(intArray, f_array, size);

    // Step #3 - print out the integer and floating point arrays
    //????
    printf("Displaying floats\n");
    float_display_array(f_array,size);
    printf("Displaying ints\n");
    integer_display_array(intArray,size);
    // Step #4 - print out the number of '1's in each integer
   
    printf("Printing count of 1's in binary representation of each int.\n"); 
    if(printBitCount(intArray,size) < 0){
        printf("Illegal Arguments set to printBitCount\n");
    }
     // Step #5 - Sort the integer array using QuickSort and print the sorted array
    //????
    printf("Sorting integer array\n");
    integerQuickSort(intArray, 0, size-1);
    integer_display_array(intArray, size);

    // Step #6 - figure out number of evens in each array (float and sorted integer arrays)
    //????

    // Step #7 - print the most frequent values from the sorted integer array
    //???? 

    // Step #8 - print the integers corresponding to the reverse bit string from integer array
    //????

	// Return successfully
	return(0);
}
