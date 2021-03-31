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
#include <stdbool.h>

#include "boolAlgebra.h"
#include "conversion.h"
#include "console.h"

int main(void) {

  short A = 0;
  short B = 1;
  printf("Testing out the boolean functions\n\n");

  printf("AND Gate: %s\n", bool_AND(A, B) ? "true": "false");
  printf("OR Gate: %s\n", bool_OR(A, B) ? "true": "false");
  printf("NAND Gate: %s\n", bool_NAND(A, B) ? "true": "false");
  printf("NOR Gate: %s\n", bool_NOR(A, B) ? "true": "false");
  printf("XOR Gate: %s\n", bool_XOR(A, B) ? "true": "false");
  printf("XNOR Gate: %s\n", bool_XNOR(A, B) ? "true": "false");

  
  printf("Program Completed!");
  return 0;
}