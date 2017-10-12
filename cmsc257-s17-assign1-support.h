#ifndef CMSC257_A1SUPPORT_INCLUDED
#define CMSC257_A1SUPPORT_INCLUDED

////////////////////////////////////////////////////////////////////////////////
//
//  File          : cmsc257-s17-assign1-support.h
//  Description   : This is a set of general-purpose utility functions we use
//                  for the 257 assignment #1.
//

//
// Functional Prototypes
int floatArrayToInt(int*, float*,int);

int myabs(int*);

int float_display_array(float*,int);
	// This function prints out the array of floating point values

int integer_display_array(int*,int);
	// This function prints out the array of integer values

int float_evens();
	// Return the number of even numbers in the array (float version)

int integer_evens();
	// Return the number of even numbers in the array (int version)

int countBits(int);
	// Count the number of '1' bits in the binary representation

int printBitCount(int*,int);
    // print the count of bits    

int most_values();
	// Print out the values with the most occurences in array

unsigned short reverseBits();
        // Reverse the binary bit string

void binaryString();
        // Print the binary equivalent of the number passed

void integerQuickSort(int*, int, int);
        // Sort the integer array using QuickSort algorithm
        
int partition(int*, int, int);

void swap(int*, int*);


#endif // CMSC257_A1SUPPORT_INCLUDED
