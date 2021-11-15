#include <stdio.h>
#include <stdlib.h>

#include "def.h"

int main(void)
{ 
  components Values = NULL;
  Values = calloc(1, sizeof(components));

  Values = setValuesDefault();

  printf("default values are: %f %f %f %i\n", Values->delta, Values->mass,Values->k,Values->deltaH);


  return 0;
}  