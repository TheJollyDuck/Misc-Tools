/*
 * TheJollyDuck
 * 
 * Conversion Source Code
 * 
 * This file contains all the necessary code to define
 * the functions in the header file.
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "conversion.h"

void const_conversion(number *num) {

  num->decimal = 0;

  num->binary = malloc(2);
  num->binary = "0";

  num->hexidec = malloc(2);
  num->hexidec = "0";

  num->other = malloc(2);
  num->other = "0";
  num->base = 10;
}

void del_conversion(number *num) {


}

void con_initialize(number *num) {

}

void con_decToBin(int dec, int *bin) {

}

void con_decToHex(int dec, char *Hex) {

}