





#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "boolAlgebra.h"

bool bool_AND(short a, short b) {
  if (a+b == 2) {
    return HIGH;

  } else {
    return LOW;
  }
}

bool bool_OR(short a, short b) {
  if (a+b >= 1) {
    return HIGH;

  } else {
    return LOW;
  }
}

bool bool_NAND(short a, short b) {
  if (a+b == 2) {
    return LOW;

  } else {
    return HIGH;
  }
}

bool bool_NOR(short a, short b) {
  if (a+b >= 1) {
    return LOW;

  } else {
    return HIGH;
  }
}

bool bool_XOR(short a, short b) {
  switch (a+b) {
      case 0:
        return LOW;
        break;

      case 1:
        return HIGH;
        break;

      case 2:
        return LOW;
        break;
  };
}

bool bool_XNOR(short a, short b) {
  switch (a+b) {
      case 0:
        return HIGH;
        break;

      case 1:
        return LOW;
        break;

      case 2:
        return HIGH;
        break;
  };
}