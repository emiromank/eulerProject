#include <stdio.h>
#include <stdlib.h>

#include "def.h"

int main(void)
{ 
  components Values = NULL;
  Values = calloc(1, sizeof(components));
  Values = setValuesDefault();
  
  printData(Values);

  changeValues(Values);
  
  return 0;
}  