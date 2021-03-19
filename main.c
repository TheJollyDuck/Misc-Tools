/*
 * The Jolly Duck
 * 
 * Miscellaneous Tools
 * 
 * This is just a program to help me in progressing in C. This program contains
 * various tools that can be used within a console terminal, although a GUI would
 * probably be implemented in the future.
 * 
 */

#include <stdio.h>  
#include <stdlib.h>
#include <string.h>

#include "conversion.h"


int main(void) {
  number sampleNum;
  const_conversion(&sampleNum);

  printf("%s\n", sampleNum.binary);
  printf("%d\n", sampleNum.decimal);
  printf("%s\n", sampleNum.hexidec);
  printf("%s\n", sampleNum.other);

  printf("Program Completed!");
  return 0;
}