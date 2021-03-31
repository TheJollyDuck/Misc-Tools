



#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


void welcome(bool *status) {
  printf(
    "\n"
    "[]=====================================[]\n"
    "||      TheJollyDuck's Misc Code       ||\n"
    "[]=====================================[]\n\n"
  );

  printf(
    "1. Number conversion\n"
    // "2. \n"
    // "3. \n"
    // "4. \n"
    "\nChoose the tool you want to use:\n[int] "
  );

  int userInput;
  scanf("%d", &userInput);

  switch (userInput) {
  case 1:
    break;

  case 2:
    break;
  
  default:
    break;
  }

  char repeatLoop;
  printf("Do you want to run another tool?\n[Y][N] ");
  scanf(" %c", &repeatLoop);
  *status = (repeatLoop == 'Y') ? true: false;
}