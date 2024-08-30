#include <stdio.h> // printf
#include <stdlib.h> // atol


/*
 * This function takes in command line arguments and converts it to long integers.
 * 
 * @param n - the number of command line inputs
 * @param char * argv[] - the arguments inputted into a character pointer
 * @return the long integer
 */
long int getLongInteger(int n, char * argv[]);

/*
 * DEBUG: This function prints the bits in reverse order to standard ouput
 * 
 * @param longInteger - the command line input that was converted to a long integer
 * @param bitIndex - the counter for the bit string array
 * @param bitString[] - the bit string array
 */
void printBitString(long int longInteger, int bitIndex, unsigned int bitString[]);

/*
 * DEBUG: print the smaller bit string with leading zeroes in reverse order to standard ouput.
 *
 * @param bitIndex - the counter for the bit string array
 * @param bitString[] - the bit string array
 */
void printLeadingZeroBitString(int bitIndex, unsigned int bitString[]);

/*
 * Compute and print the Hamming distance between the two bit strings.
 *
 * @param bitIndex - the counter for the bit string array
 * @param bitString1[] - the array for the first bit string
 * @param bitString2[] - the array for the second bit string
 */
void computeHammingDistance(int bitIndex, unsigned int bitString1[], unsigned int bitString2[]);

/*
 * The Hamming distance between two equal length bit strings is the number of positions where the bits do not match.
 * In this lab, we can calculate the Hamming distance between two non-negative integers by converting them to their 
 * unsigned binary (bit string) representation and counting the number of bit positions that do not match.
 */
int main(int argc, char * argv[]) {
  if (argc >= 3) { // if 3 or more command-line argumnets are provided

    /* Convert command line argument to a long integer. */
    long int longInteger1 = getLongInteger(1, argv); // record the second command line arg
    long int longInteger2 = getLongInteger(2, argv); // record the third command line arg
    // printf("Long Integer 1: %ld.\n", longInteger1); // debug integer 1
    // printf("Long Integer 2: %ld.\n", longInteger2); // debug integer 2

    /* Convert a non-negative integer to its bit string (unsigned binary) representation. */
    /* Declare all instance variables. */
    unsigned int bitString1[64] = {0}; // array to store the bit string for integer 1
    unsigned int bitString2[64] = {0}; // array to store the bit string from integer 2
    long int quotient1 = longInteger1; // initialize the starting quotient for integer 1
    long int quotient2 = longInteger2; // Initialize the starting quotient for integer 2
    int remainder1 = 0; // track the remainders for integer1
    int remainder2 = 0; // track the remainders for integer2
    int bitIndex1 = 0; // counter to help move along the array for bit string 1
    int bitIndex2 = 0; // counter to help move along the array for bit string 2
    
    /* Handle the bit string conversion for the first integer */
    while(quotient1 > 0){ // exit the loop if the quotient becomes 0
      remainder1 = quotient1 % 2; // get the remainder from the quotient
      quotient1 = quotient1 / 2; // divide the quotient by 2
      bitString1[bitIndex1] = remainder1; // store the remainder in the integer's bit string
      bitIndex1++; // go to the next space in the bit string array
    } // while

    if(longInteger1 == 0){ // if integer 1 is 0
      bitString1[0] = 0; // integer 1's bit string is just 0
      bitIndex1++; // go to the next space in the bit string array
    } // if

    /* Handle the bit string conversion for the second integer */
    while(quotient2 > 0){ // exit the loop if the quotient becomes 0
      remainder2 = quotient2 % 2; // get the remainder from the quotient
      quotient2 = quotient2 / 2; // divide the quotient by 2
      bitString2[bitIndex2] = remainder2; // store the remainder in the integer's bit string
      bitIndex2++; // go to the next space in the bit string array
    } // while

    if(longInteger2 == 0){ // if integer 2 is 0
      bitString2[0] = 0; // integer 2's bit string is just 0
      bitIndex2++; // go to the next space in the bit string array
    } // if

    // printBitString(longInteger1, bitIndex1, bitString1); // debug bit string 1
    // printBitString(longInteger2, bitIndex2, bitString2); // debug bit string 2

    /* Add leading zeroes if the bit strings are not equal. */
    // printf("length of bit string 1: %d.\n", bitIndex1); // debug bit string 1 size
    // printf("length of bit string 2: %d.\n", bitIndex2); // debug bit string 2 size

    int bitDifference = 0; // stores the length difference between the two bit strings
    
    if(bitIndex1 < bitIndex2) { // if bitString1 is the smaller bit string
      bitDifference = bitIndex2 - bitIndex1; // get the difference in length between bit strings
    
      for(int i = bitIndex1; i < bitIndex1 + bitDifference; i++) { // iterate bitDifference times
	bitString1[i] = 0; // add the leading zeroes for bit string 1
      } // for

      bitIndex1 = bitIndex2; // make sure bitIndex1 reflects the final length
      // printLeadingZeroBitString(bitIndex1, bitString1); // debug leading zeroes bit string 1
    }  else if (bitIndex2 < bitIndex1) { // else if bitString2 is smaller
      bitDifference = bitIndex1 - bitIndex2; // get the differnece in length between bit strings

      for(int i = bitIndex2; i < bitIndex2 + bitDifference; i++) { // iterate bitDifference times
	bitString2[i] = 0; // ad the leading zeroes for bit string 2
      } // for

      bitIndex2 = bitIndex1; // make sure bitIndex2 reflects the final length
      // printLeadingZeroBitString(bitIndex1, bitString2); // debug leading zeroes bit string 2
    } // if

    /* Print the final bit string representation of both the long integer. */
    // printf("length of bit string 1 after adding leading 0s: %d.\n", bitIndex1); // debug
    // printf("length of bit string 2 after adding leading 0s: %d.\n", bitIndex2); // debug
    
    for (int i = bitIndex1 - 1; i >= 0; i--){ // loop backwards through the array
      printf("%d", bitString1[i]); // Print each bit
    } // for
    printf(" is the bit string for %ld\n", longInteger1); // print context

    for (int i = bitIndex2 - 1; i >= 0; i--){ // loop backwards through the array
      printf("%d", bitString2[i]); // Print each bit
    } // for
    printf(" is the bit string for %ld\n", longInteger2); // print context

    /* Compute the Hamming Distance between the two equal length bit strings. */
    computeHammingDistance(bitIndex2, bitString1, bitString2); // calculate hamming distance
  } // if
  return 0; // exit the method
} // main

long int getLongInteger(int n, char * argv[]) {
  long int longInteger = atol(argv[n]); // record the cla as a long integer
  return longInteger; // return the long integer
} // getLongInteger

void printBitString(long int input, int bitIndex, unsigned int bitString[]) {            
  printf("%ld in binary is ", input); // print the original long integer
  for (int i = bitIndex - 1; i >= 0; i--){ // loop backwards through the array
    printf("%d", bitString[i]); // Print each bit
  } // for
  printf(".\n"); // Newline
} // printBitString

void printLeadingZeroBitString(int bitIndex, unsigned int bitString[]) {
  printf("Added leading zereoes to smaller bit string: "); // add context
  for (int i = bitIndex - 1; i >= 0; i--){ // loop backwards through the array
    printf("%d", bitString[i]); // print each bit
  } // for
  printf(".\n"); // newline
} // printLeadingZeroBitString

void computeHammingDistance(int bitIndex, unsigned int bitString1[], unsigned int bitString2[]) {
  int hammingDistance = 0;
  for (int i = bitIndex - 1; i >= 0; i--){ // loop backwards through the array
    if (bitString1[i] != bitString2[i]){
      hammingDistance++;
    } // if
  } // for
  printf("%d is the Hamming distance between the bit strings", hammingDistance); // print hamming distance
  printf("\n"); // newline
} // computeHammingDistance
