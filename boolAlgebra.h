/*
 * TheJollyDuck
 * 
 * Misc Tools 
 * Boolean Algebra Header
 * 
 * This header provides boolean algebra functionality.
 * Can do simple boolean functions.
 *
 * Minimisation will be considered in the future
 * 
 */

#ifndef BOOL_ALGEB_INC
#define BOOL_ALGEB_INC

#define HIGH 1
#define LOW 0

bool bool_AND(short a, short b);
bool bool_OR(short a, short b);
bool bool_NAND(short a, short b);
bool bool_NOR(short a, short b);
bool bool_XOR(short a, short b);
bool bool_XNOR(short a, short b);

#endif