/*
 * The Jolly Duck
 * 
 * Conversion Header
 * 
 * This header contains all delcarations for the necessary code for 
 * converting numbers of a specific base to another base.
 * 
 * There is some implementations regarding this.
 * 
 * Hex and Binary bases will have their own dedicated functions, and 
 * other bases will be generic.
 * 
 */

// The initial idea is to get this with working with ints before moving
//  onto floats and doubles.

#ifndef CONVERSION_INCL
#define CONVERSION_INCL

typedef struct conversion {
  
  int decimal;

} number;


// emulated constructor and destructor
void const_conversion(number *num);
void del_conversion(number *num);

void con_initialize(number *num);
void con_decToBin(int dec, int *bin);
void con_decToHex(int dec, char *Hex);


#endif